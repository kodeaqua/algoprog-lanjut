#include <iostream>

using namespace std;

/*
    Pendeklarasian fungsi baru tetapi hanya
    berupa prototipe dengan nama hasil()
*/
double hasil(int a,int b);

// Pendeklarasian fungsi main()
int main()
{
    int a = 0, b = 0;
    double c = 0;
    
    cout << "Masukan nilai a : ";
    cin >> a;
    
    cout << "Masukan nilai b : ";
    cin >> b;
    
    c = hasil(a, b);
    
    cout << "Hasil perkalian dari " << a << " x " << b << " adalah " << c;
    
    return 0;
}

// Fungsi hasil()
double hasil(int x, int y)
{
    return(x * y);
}
