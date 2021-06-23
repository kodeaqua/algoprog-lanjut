#include <iostream>

using namespace std;

struct Data
{
    char npm[10], nama[30], angkatan[5], kelas[3];
};

int main()
{
    int jumlah_mahasiswa = 0;
    cout << "Masukan jumlah mahasiswa: ";
    cin >> jumlah_mahasiswa;

    Data mahasiswa[jumlah_mahasiswa];

    for (int i = 0; i < jumlah_mahasiswa; i++)
    {
        cout << "--- Data Mahasiswa ke-" << (i + 1) << "\n";
        cout << "Masukan npm mahasiswa: ";
        fflush(stdin);
        gets(mahasiswa[i].npm);
        cout << "Masukan nama mahasiswa: ";
        fflush(stdin);
        gets(mahasiswa[i].nama);
        cout << "Masukan angkatan mahasiswa: ";
        fflush(stdin);
        gets(mahasiswa[i].angkatan);
        cout << "Masukan kelas mahasiswa: ";
        fflush(stdin);
        gets(mahasiswa[i].kelas);
    }

    for (int i = 0; i < jumlah_mahasiswa; i++)
    {
        cout << "--- Data Mahasiswa ke-" << (i + 1) << " ---"
             << "\nNPM mahasiswa: " << mahasiswa[i].npm 
             << "\nNama mahasiswa: " << mahasiswa[i].nama
             << "\nAngkatan: " << mahasiswa[i].angkatan
             << "\nKelas: " << mahasiswa[i].kelas
             << "\n----------------------------" << endl;
    }

    return 0;
}