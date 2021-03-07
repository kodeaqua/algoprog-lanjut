#include <iostream>

using namespace std;

// Pendeklarasian variabel eksternal
int data = 10;

void panggil_lokal_lain();
void panggil_eksternal();

int main()
{
    // Pendeklarasian variabel lokal pada fungsi main()
    int data = 20;

    cout << "Nilai variabel data pada fungsi main() = " << data << "\n";
    panggil_lokal_lain();
    panggil_eksternal();

    return 0;
}

void panggil_lokal_lain()
{
    // Pendeklarasian variabel lokal pada fungsi panggil_lokal_lain()
    int data = 30;

    cout << "Nilai variabel data pada fungsi panggil_lokal_lain() = " << data << "\n";
}

void panggil_eksternal()
{
    cout << "Nilai variabel data eksternal adalah = " << data << "\n";
}
