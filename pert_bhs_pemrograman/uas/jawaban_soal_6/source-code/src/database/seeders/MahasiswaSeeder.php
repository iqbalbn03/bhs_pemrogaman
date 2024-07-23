<?php

namespace Database\Seeders;

use Illuminate\Database\Console\Seeds\WithoutModelEvents;
use Illuminate\Database\Seeder;
use Illuminate\Support\Facades\DB;

class MahasiswaSeeder extends Seeder
{
    /**
     * Run the database seeds.
     */
    public function run(): void
    {
        $timestamp = \Carbon\Carbon::now()->toDateTimeString();
        DB::table('mahasiswas')->insert([
            'nama' => 'nama',
            'nim' => 'nim',
            'prodi' => 'prodi',
            'created_at' => $timestamp,
            'updated_at' => $timestamp,
        ]);
    }
}
