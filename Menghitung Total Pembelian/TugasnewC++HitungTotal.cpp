#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    float harga_barang, total_beli, diskon, total_bayar;
    int jumlah_barang;

    // Input
    cout << "Masukkan harga barang: ";
    cin >> harga_barang;
    cout << "Masukkan jumlah barang: ";
    cin >> jumlah_barang;

    // Hitung total beli
    total_beli = harga_barang * jumlah_barang;

    // Tentukan diskon
    if (jumlah_barang > 100) {
        diskon = 0.15 * total_beli;
    } else {
        diskon = 0.05 * total_beli;
    }

    // Hitung total yang harus dibayar
    total_bayar = total_beli - diskon;

    // Output
    cout << "\nTotal pembelian   : Rp " << total_beli << endl;
    cout << "Diskon            : Rp " << diskon << endl;
    cout << "Total yang dibayar: Rp " << total_bayar << endl;

    return 0;
}

