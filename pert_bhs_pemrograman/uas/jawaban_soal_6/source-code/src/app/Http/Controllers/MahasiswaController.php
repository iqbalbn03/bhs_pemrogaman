<?php

namespace App\Http\Controllers;

use App\Models\Mahasiswa;
use Illuminate\Http\Request;
use Illuminate\Support\Facades\DB;

class MahasiswaController extends Controller
{
    /**
     * Display a listing of the resource.
     *
     * @return \Illuminate\Http\Response
     */
    public function index()
    {
        $query = DB::connection('mysql')->table('mahasiswas')->get();
        return response()->json($query, 200);
    }

    /**
     * Show the form for creating a new resource.
     *
     * @return \Illuminate\Http\Response
     */
    public function create()
    {
        //
    }

    /**
     * Store a newly created resource in storage.
     *
     * @param  \Illuminate\Http\Request  $request
     * @return \Illuminate\Http\Response
     */
    public function store(Request $request)
    {
        $this->validate($request, [
            'nama' => 'required|string',
            'nim' => 'required|string',
            'prodi' => 'required|string'
        ]);
        $mahasiswa = [
            'nama' => $request->input('nama'),
            'nim' => $request->input('nim'),
            'prodi' => $request->input('prodi'),
            'created_at' => \Carbon\Carbon::now()->toDateTimeString(),
            'updated_at' => \Carbon\Carbon::now()->toDateTimeString(),
        ];
        $id = DB::connection('mysql')->table('mahasiswas')->insertGetid($mahasiswa);
        $data = DB::connection('mysql')->table('mahasiswas')->where('id', $id)->first();
        $response = [
            'message' => 'true',
            'message' => 'Mahasiswa Created',
            'date' => $data
        ];
        return response()->json($response, 201);
    }

    /**
     * Display the specified resource.
     *
     * @param  \App\Models\Mahasiswa  $mahasiswa
     * @return \Illuminate\Http\Response
     */
    public function show($id)
    {
        $data = Mahasiswa::find($id);
        if($data){
            return response()->json([
                'success' => 'true',
                'message' => 'Data Retrieve',
                'data' => $data
            ]);
        }else{
            return response()->json([
                'success' => 'false',
                'message' => 'Parameter Not Found',
            ]);
        }
    }

    /**
     * Show the form for editing the specified resource.
     *
     * @param  \App\Models\Mahasiswa  $mahasiswa
     * @return \Illuminate\Http\Response
     */
    public function edit(Request $request, $id)
    {
        $this->validate($request, [
            'nama' => 'required|string',
            'nim' => 'required|string',
            'prodi' => 'required|string'
        ]);

        $data = Mahasiswa::find($id);

        if($data){
            $data->nama = $request->input('nama');
            $data->nim = $request->input('nim');
            $data->prodi = $request->input('prodi');
            $data->updated_at = \Carbon\Carbon::now()->toDateTimeString();
            $data->save();
            return response()->json([
                'success' => 'true',
                'message' => 'Data Updated',
                'data' => $data,
            ]);
        }else{
            return response()->json([
                'success' => 'false',
                'message' => 'Data Not Found',
            ]);
        }
    }

    /**
     * Update the specified resource in storage.
     *
     * @param  \Illuminate\Http\Request  $request
     * @param  \App\Models\Mahasiswa  $mahasiswa
     * @return \Illuminate\Http\Response
     */
    public function update(Request $request, Mahasiswa $mahasiswa)
    {
        //
    }

    /**
     * Remove the specified resource from storage.
     *
     * @param  \App\Models\Mahasiswa  $mahasiswa
     * @return \Illuminate\Http\Response
     */
    public function destroy($id)
    {
        $data = Mahasiswa::find($id);
        if($data){
            $data->delete();
            return response()->json([
                'success' => 'true',
                'message' => 'Data Deleted',
            ]);
    }else{
        return response()->json([
            'success' => 'false',
            'message' => 'Data Not Found',
        ]);
    }
    }
}
