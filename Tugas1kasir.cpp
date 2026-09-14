/*
Nama Program: Tugas1kasir.cpp
Nama        : Alya Lubna Khayara
NPM         : 140810260030
Tanggal Buat: 8 September 2026
Deskripsi   : Membuat program kasir untuk menghitung diskon dan total bayar
             berdasarkan jumlah belanjaan pembeli
*/

#include <iostream> //header file library
using namespace std; //variabel global

int main() {
    /*buat variabel*/
    int total_belanja;
    int besar_diskon;
    int total_bayar;

    /*tampilkan pesan awal dan minta masukan user*/
    cout << "=== Kalkulator Kasir Toko Buku ===\n";
    cout << "Masukkan total belanja (Rp): "; cin >> total_belanja;
    cout << "\n--- Ringkasan Pembayaran ---\n";

    /*perhitungan total bayar*/
    if(total_belanja >= 300000) { //jika belanja lebih dari 300.000
        besar_diskon = total_belanja * 0.2; //hitung diskon 20%
        total_bayar = total_belanja - besar_diskon; //hitung total bayar
        cout << "Diskon (20%)\t: Rp " << besar_diskon << endl;
    } else if(total_belanja >= 100000 && total_belanja < 300000) { //jika belanja di rentang 100 - 299 rb
        besar_diskon = total_belanja * 0.1; //hitung diskon 10%
        total_bayar = total_belanja - besar_diskon; //hitung total bayar
        cout << "Diskon (10%)\t: Rp " << besar_diskon << endl;
    } else {
        total_bayar = total_belanja;
        cout << "Diskon (0%)\t: Rp 0\n";
    }
    cout << "Total Bayar\t: Rp " << total_bayar << endl;
    
    return 0;
}