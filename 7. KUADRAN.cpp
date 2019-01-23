#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	float x,y;
	cout<<"Nama  = Danu Adiputra"<<endl;
	cout<<"NIM   = 311810929"<<endl;
	cout<<"Kelas = 18.B.2"<<endl<<endl;
	cout<<"MENENTUKAN KUADRAN SUATU TITIK"<<endl<<endl;
	cout<<"Masukkan nilai X = ";cin>>x;
	cout<<"Masukkan nilai Y = ";cin>>y;
	cout<<endl;
	cout<<"Posisi titik berada di ";
	if(x>=0&&y>=0)
	{
		cout<<"KUADRAN I";
	}
	else if(x<=0&&y>=0)
	{
		cout<<"KUADRAN II";
	}
	else if(x<0&&y<0)
	{
		cout<<"KUADRAN III";
	}
	else if(x>=0&&y<0)
	{
		cout<<"KUADRAN IV";
	}
}
