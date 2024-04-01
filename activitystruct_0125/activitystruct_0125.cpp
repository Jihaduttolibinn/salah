
#include <iostream>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    int umur;
};
int main()
{
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa : ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;
    cout << "Alamat Mahasiswa : ";
    cin >> mhs.alamat;
    cout << "Umur Mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n nim : " << mhs.nim;
    cout << "\n nama : " << mhs.nama;
    cout << "\n alamat : " << mhs.alamat;
    cout << "\n umur : " << mhs.umur;
}



struct DetailAlamat {
    string desa;
    string kota;
};

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    int umur;
};
