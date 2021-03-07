#include<iostream>
#include <conio.h>
using namespace std;
double hasil(int a,int b); //protytpe fungsi
int main()
{
	int x,y;
	double z;
	cout<<"masukan nilai x : ";
	cin>>x;
	cout<<"masukan nilai y : ";
	cin>>y;
	z=hasil (x,y);
	cout<<"hasil perkalianya = ";
	cout<< x << " x " << y << " = " <<z;
	getch();
}
double hasil (int a,int b)
{
	return (a*b); 
}
