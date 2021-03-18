#include <iostream>
#include <conio.h> /* Pakai ini jika memakai KFlearning/Visual Studio Code [1/2] */

using namespace std;

int penghitung = 1; /* Mendeklarasikan variabel global */

void panggilSaya()
{
    if (penghitung == 1)
    {
        cout << "> Program pindah dari fungsi main() ke fungsi panggilSaya() untuk pertama kali\n\n";
    }
    else
    {
        cout << "> Program pindah dari fungsi panggilSaya() ke fungsi panggilSaya() lagi\n\n";
    }
    
    if (penghitung <= 5)
    {
        cout << "> Sekarang hitungan ke-" << penghitung << "\n\n";
        penghitung += 1;
 
        /*
            Recursion/Rekursif, memanggil fungsi itu sendiri sehingga menciptakan sebuah loop.
            Untuk menghindari pengulangan secara terus menerus, buat kondisi true/false seperti pada if else
        */
        panggilSaya();
    }
    else
    {
        cout << "> Stop! fungsi panggilSaya() sudah selesai\n\n";
    }
}

int main()
{
    cout << "> Program sekarang berada pada fungsi main()\n\n";

    /* Memanggil fungsi panggilSaya() */
    panggilSaya();

    cout << "> Program kembali ke fungsi main()\n\n";

    getch(); /* Pakai ini jika memakai KFlearning/Visual Studio Code [2/2] */
    return 0;
}