#include<iostream>
#include <conio.h>
using namespace std;

int data1 = 100;  //variabel external
void fungsi_satu();
void fungsi_dua();
int main(){
	int data2 =200; //variabel lokal main
	fungsi_satu();
	fungsi_dua();
	cout<<"Nilai data lokal main = "<<data2<<endl;
	getch();
}
void fungsi_satu(){
	int data3= 300; //variabel lokal fungsi_satu
	cout<<"Nilai data lokal satu = "<<data3<<endl;
}
void fungsi_dua(){
	cout<<"Nilai data external = "<<data1<<endl;
}
