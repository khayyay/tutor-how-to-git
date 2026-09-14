/*
Nama Program: Tugas2mesinmin.cpp
Nama        : Alya Lubna Khayara
NPM         : 140810260030
Tanggal Buat: 09 September 2026
Deskripsi   : Membuat program simulasi mesin minuman yg memproses
             pembelian, mengecek kecukupan uang, dan menghitung pecahan kembalian
*/

#include <iostream> //header file library
using namespace std; //variabel global

int main() {
    /*Deklarasi variabel*/
    int kode; //variabel untuk menyimpan kode minuman yang dipilih
    int input_uang; //variabel untuk menyimpan inputan uang ke mesin minuman
    int harga; //variabel harga minuman

    /*Output awal mesin sekaligus input kode dan jumlah uang*/
    cout << "=== VENDING MACHINE AUTOMAT ===\n";
    cout << "Pilihan Minuman:\n";
    cout << "1. Air Mineral (Rp 4000)\n2. Teh Botol (Rp 6000)\n3. Kopi Susu (Rp 10000)\n";
    cout << "Pilih kode minuman (1-3) : "; cin >> kode; //input kode minuman yang dipilih
    cout << "Masukkan uang anda (Rp) : "; cin >> input_uang;
    cout << "\n--- DETAIL TRANSAKSI---\n";

    /*menentukan harga sesuai minuman yang dipilih*/
    switch(kode) {
        case 1 : //jika memilih air mineral
            harga = 4000;
            break; //wajib untuk mengakhiri case
        case 2 : //jika memilih teh botol
            harga = 6000;
            break; //wajib untuk mengakhiri case
        case 3 : //jika memilih kopi susu
            harga = 10000;
            break; //wajib untuk mengakhiri case
        default : //error handling
            cout << "Transaksi Gagal! Kode minuman tidak tersedia\n";
            break;
    }

    /*Proses detail transaksi*/
    if(input_uang < harga) { //kondisi jika uangnya kurang
        int kurang = harga - input_uang; //variabel untuk menghitung besar kekurangan uang
        cout << "Transaksi Gagal! Uang anda kurang Rp " << kurang << ".\n";
    } else if(input_uang > harga) { //kondisi jika uangnya lebih
        int kembali = input_uang - harga; //variabel untuk menghitung besar kembalian
        cout << "Transaksi Berhasil! Anda memiliki kembalian sebesar Rp " << kembali << ".\n";
        cout << "\n--- DETAIL KEMBALIAN ---\n";
        if(kembali % 5000 == 0) { //kondisi jika nominal kembalian kelipatan 5000
            int jumlah = kembali / 5000; //variabel untuk menghitung jumlah lembaran uang 5000
            cout << jumlah << " lembar pecahan Rp 5000.\n";
        } else if(kembali < 5000) { //kondisi jika nominal kembalian kurang dari 5000
            int jumlah = kembali / 1000; //variabel untuk menghitung jumlah lembaran uang 1000
            cout << jumlah << " lembar pecahan Rp 1000.\n";
        } else {
            int jumlah = kembali / 5000; //variabel untuk menghitung jumlah lembaran uang 5000
            int sisa = (kembali % 5000) / 1000; //variabel untuk menghitung jumlah lembaran uang 1000
            cout << jumlah << " lembar pecahan Rp 5000.\n";
            cout << sisa << " lembar pecahan Rp 1000.\n";
        }
    } else{ //kondisi jika uang pas
        cout << "Transaksi Berhasil! Uang pas sesuai harga.\n";
    }

    cout << "\n=== TERIMA KASIH ===\n";

    return 0;
}