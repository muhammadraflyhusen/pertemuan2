#include <iostream>
using namespace std;

int main()
{
    // Deklarasi variabel
    float matematika, fisika, rerata;

    // Meminta input dari pengguna
    cout << "Masukkan nilai Matematika: ";
    cin >> matematika;

    cout << "Masukkan nilai Fisika: ";
    cin >> fisika;

    // Menghitung rerata
    rerata = (matematika + fisika) / 2;

    // Memeriksa kondisi kelulusan
    if (matematika > 70 && rerata > 60)
    {
        cout << "Selamat, Anda lulus!" << endl;
    }
    else
    {
        cout << "Maaf, Anda belum lulus." << endl;
    }

    return 0;
}