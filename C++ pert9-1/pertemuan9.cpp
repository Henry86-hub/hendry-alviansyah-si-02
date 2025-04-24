#include <iostream>
#include <string>
#include <iomanip> // untuk setprecision
using namespace std;

int main() {
    string nama, jenisServis, statusLangganan;
    int biaya = 0;
    float potongan = 0.0;

    // Input data pelanggan
    cout << "Masukkan nama pelanggan: ";
    getline(cin, nama);

    cout << "Masukkan jenis servis (Ringan/Sedang/Berat): ";
    cin >> jenisServis;

    cout << "Apakah pelanggan langganan tetap? (ya/tidak): ";
    cin >> statusLangganan;

    // Konversi status langganan jadi boolean
    bool langganan = (statusLangganan == "ya");

    // Tentukan biaya berdasarkan jenis servis
    if (jenisServis == "Ringan") {
        biaya = 300000;
        if (langganan) potongan = 0.10;
    } else if (jenisServis == "Sedang") {
        biaya = 500000;
        if (langganan) potongan = 0.15;
    } else if (jenisServis == "Berat") {
        biaya = 800000;
        if (langganan) potongan = 0.20;
    } else {
        cout << "Jenis servis tidak valid." << endl;
        return 0;
    }

    float nilaiPotongan = biaya * potongan;
    float total = biaya - nilaiPotongan;

    // Output dengan 2 angka desimal
    cout << fixed << setprecision(2);
    cout << "\n=== RINCIAN SERVIS ===" << endl;
    cout << "Nama Pelanggan     : " << nama << endl;
    cout << "Jenis Servis       : " << jenisServis << endl;
    cout << "Status Langganan   : " << (langganan ? "Ya" : "Tidak") << endl;
    cout << "Biaya Awal         : Rp" << biaya << endl;

    if (langganan) {
        cout << "Potongan           : Rp" << nilaiPotongan << " (" << potongan * 100 << "%)" << endl;
    } else {
        cout << "Potongan           : Tidak ada" << endl;
    }

    cout << "Total yang Dibayar : Rp" << total << endl;

    return 0;
}

