#include <iostream>

using namespace std;

int main()
{
    int gajiPokok;
    int gol;
    int jmlAnak;
    int tunjAnak;
    int tunjKeluarga;
    int totalPendapatan;

    cout << "Selamat datang di Universitas Muhammadiyah Sukabumi" << endl;
    cout << "Silahkan masukkan tipe golongan anda sebagai staff dosen di UMMI" << endl;
    cout << "Staff dosen golongan : ";
    cin >> gol;

    if (gol == 1){
        gajiPokok = 2500000;
        cout << "Anda memiliki gaji pokok sebesar : " << gajiPokok << endl;
        tunjAnak = 250000;
        cout << "Anda memiliki jumlah anak : ";
        cin >> jmlAnak;
        if(jmlAnak < 3){
            tunjAnak = jmlAnak * tunjAnak;
        }else if (jmlAnak >= 3){
            tunjAnak = 3 * tunjAnak;
        }else{
            cout << "Tidak Valid" << endl;
        }
        cout << "Nilai tunjangan anak anda sebesar : " << tunjAnak << endl;
        tunjKeluarga = gajiPokok * 0.2;
        cout << "Tunjangan keluarga anda ialah sebesar : " << tunjKeluarga << endl;
    }else if (gol == 2){
        gajiPokok = 3500000;
        cout << "Anda memiliki gaji pokok sebesar : " << gajiPokok << endl;
        tunjAnak = 350000;
        cout << "Anda memiliki jumlah anak : ";
        cin >> jmlAnak;
        if(jmlAnak < 3){
            tunjAnak = jmlAnak * tunjAnak;
        }else if (jmlAnak >= 3){
            tunjAnak = 3 * tunjAnak;
        }else{
            cout << "Tidak Valid" << endl;
        }
        cout << "Nilai tunjangan anak anda sebesar : " << tunjAnak << endl;
        tunjKeluarga = gajiPokok * 0.22;
        cout << "Tunjangan keluarga anda ialah sebesar : " << tunjKeluarga << endl;
    }else if (gol == 3){
        gajiPokok = 4500000;
        cout << "Anda memiliki gaji pokok sebesar : " << gajiPokok << endl;
        tunjAnak = 450000;
        cout << "Anda memiliki jumlah anak : ";
        cin >> jmlAnak;
        if(jmlAnak < 3){
            tunjAnak = jmlAnak * tunjAnak;
        }else if (jmlAnak >= 3){
            tunjAnak = 3 * tunjAnak;
        }else{
            cout << "Tidak Valid" << endl;
        }
        cout << "Nilai tunjangan anak anda sebesar : " << tunjAnak << endl;
        tunjKeluarga = gajiPokok * 0.25;
        cout << "Tunjangan keluarga anda ialah sebesar : " << tunjKeluarga << endl;
    }else{
        cout << "Golongan staff dosen di UMMI hanya memiliki golongan 1,2,dan 3." << endl;
    }

    totalPendapatan = gajiPokok + tunjAnak + tunjKeluarga;
    cout << "Total pendapatan anda sebesar : " << totalPendapatan << endl;
}