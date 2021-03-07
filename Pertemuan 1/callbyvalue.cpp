#include<iostream>
#include<conio.h>
using namespace std;
/* contoh program transfer by value */

int Tambah(int x); //prototype fungsi
int main(){
	int a,hasil;
	cout<<"Masukan Bilangan : ";
	cin>>a;
	
	cout<<" a awal = "<<a<<endl;
	hasil= Tambah(a); 
	cout<<"a akhir = "<<a<<endl;
	cout<<"Hasil : "<<hasil;
	getch();
}

int Tambah(int x){
	cout<<" x awal = "<<x<<endl;
	x=x+2;
	cout<<"x akhir = "<<x<<endl;
	return x;	
}
