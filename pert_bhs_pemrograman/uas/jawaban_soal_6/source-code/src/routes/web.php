<?php

/** @var \Laravel\Lumen\Routing\Router $router */

/*
|--------------------------------------------------------------------------
| Application Routes
|--------------------------------------------------------------------------
|
| Here is where you can register all of the routes for an application.
| It is a breeze. Simply tell Lumen the URIs it should respond to
| and give it the Closure to call when that URI is requested.
|
*/

$router->get('/', function () use ($router) {
    return $router->app->version();
});

$router->group(['prefix' => 'api/v1/user','middleware'=>'auth'],function () use ($router){
    $router->get('/', ['uses' => 'UserController@index']);
});

$router->group(['prefix' => 'api/v1/testing'], function() use ($router){
    $router->get('/', ['uses' => 'UserController@index']);
	$router->post('/', ['uses' => 'UserController@create ']);
	$router->get('/{id}', ['uses' => 'UserController@show']);
	$router->delete('/{id}', ['uses' => 'UserController@destroy']);
	$router->put('/{id}', ['uses' => 'UserController@edit']);
});

$router->group(['prefix' => 'api/v1/mahasiswa','middleware'=>'auth'],function () use ($router){
    $router->get('/', ['uses' => 'MahasiswaController@index']);
});

$router->group(['prefix' => 'api/v1/mahasiswa','middleware'=>'auth'],function () use ($router){
	$router->get('/', ['uses' => 'MahasiswaController@index']);
	$router->post('/', ['uses' => 'MahasiswaController@store']);
	$router->delete('/{id}',['uses' => 'MahasiswaController@destroy']);
	$router->get('/{id}',['uses' => 'MahasiswaController@show']);
	$router->put('/{id}',['uses' => 'MahasiswaController@edit']);
});

