#include <iostream>

using namespace std;

int Tambah(int b);

int main()
{
    int a = 0, hasil = 0;

    cout << "Masukan nilai a : ";
    cin >> a;

    cout << "Nilai a awal  = " << a << "\n";
    hasil = Tambah(a);
    cout << "Nilai a akhir = " << a << "\n";

    return 0;
}

int Tambah(int b)
{
    cout << "Nilai b awal  = " << b << "\n";

    b += 2;

    cout << "Nilai b akhir = " << b << "\n";

    return 0;
}
