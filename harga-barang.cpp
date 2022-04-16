#include <iostream>

using namespace std;

int main()
{
    char jenisBarang;
    int kode;
    float hargaAwal;
    float hargaBaru;
    float diskon;

    cout << "Jenis barang : ";
    cin >> jenisBarang;

    cout << endl;

    cout << "Kode : ";
    cin >> kode;

    cout << endl;

    cout << "Harga : ";
    cin >> hargaAwal;

    cout << endl;

    if (jenisBarang == 'A'){
        diskon = hargaAwal * 0.25;
        hargaBaru = hargaAwal - diskon;
        cout << "Jenis barang " << jenisBarang << " mendapatkan diskon sebesar 25%, Harga setelah di diskon = " << hargaBaru << endl;
    }else if (jenisBarang == 'B'){
        diskon = hargaAwal * 0.15;
        hargaBaru = hargaAwal - diskon;
        cout << "Jenis barang " << jenisBarang << " mendapatkan diskon sebesar 15%, Harga setelah di diskon = " << hargaBaru << endl;
    }else if (jenisBarang == 'C') {
        diskon = hargaAwal * 0.4;
        hargaBaru = hargaAwal - diskon;
        cout << "Jenis barang " << jenisBarang << " mendapatkan diskon sebesar 40%, Harga setelah di diskon = " << hargaBaru << endl;
    }else{
        cout << "Jenis barang tidak valid" << endl;
    }
}