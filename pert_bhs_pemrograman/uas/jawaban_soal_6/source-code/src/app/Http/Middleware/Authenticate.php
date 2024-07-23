<?php

namespace App\Http\Middleware;

use Closure;
use Illuminate\Contracts\Auth\Factory as Auth;
use Illuminate\support\Facades\DB;

class Authenticate
{
    /**
     * The authentication guard factory instance.
     *
     * @var \Illuminate\Contracts\Auth\Factory
     */
    protected $auth;

    /**
     * Create a new middleware instance.
     *
     * @param  \Illuminate\Contracts\Auth\Factory  $auth
     * @return void
     */
    public function __construct(Auth $auth)
    {
        $this->auth = $auth;
    }

    /**
     * Handle an incoming request.
     *
     * @param  \Illuminate\Http\Request  $request
     * @param  \Closure  $next
     * @param  string|null  $guard
     * @return mixed
     */
    public function handle($request, Closure $next, $guard = null)
{
    if ($this->auth->guard($guard)->guest()) {
        $token = $request->header('token'); // Directly get the token, may be null

        if ($token) {
            $check_token = DB::connection('mysql')
                ->table('users')
                ->where('password', $token)
                ->first();

            if ($check_token === NULL) {
                // Return a JSON response if the token is invalid
                return response()->json([
                    'success' => 'false',
                    'message' => 'Invalid Token'
                ], 401);
            }
        } else {
            // Return a JSON response if the token is not provided
            return response()->json([
                'success' => 'false',
                'message' => 'Token Not Provided'
            ], 401);
        }
    }

    return $next($request);
}

}
