#include<iostream>
#include<string.h>
using namespace std;
struct SOPHUC
{
	int a;
	int b;
};
void nhap(SOPHUC &sp)
{
	cout<<"\n";
	cout<<"Nhap phan thuc ";cin>>sp.a;
	cout<<"Nhap phan ao ";cin>>sp.b;
	cout<<"\n";
}
void xuat(SOPHUC sp)
{
	cout<<"Phan thuc vua nhap la "<<sp.a;
	cout<<"\n";
	cout<<"Phan thuc vua nhap la "<<sp.b;
	cout<<"\n";
}
void nhapmang(SOPHUC sp[], int &n)
{

	for( int i=0;i<n;i++)
	{
		cout<<"Nhap vao phan tu thu "<<i;
		nhap(sp[i]);
	} 
}
void xuatmang(SOPHUC sp[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"*"<<" So phuc cua phan tu thu "<<i;
		cout<<"\n";
		xuat(sp[i]);
		cout<<"\n";
	}
}
void Xuat(SOPHUC sp)
{
	cout<<"\n";
	cout<<"Phan so thuc "<<sp.a;
	cout<<"\n";
	cout<<"Phan so ao "<<sp.b;
	cout<<"\n";
	cout<<"So phuc la "<<sp.a<<"+"<<sp.b<<"i";

}
SOPHUC tong(SOPHUC sp1, SOPHUC sp2)
{
	SOPHUC temp;
	temp.a=sp1.a+sp2.a;
	temp.b=sp1.b+sp2.b;
	return temp;
}
SOPHUC mangtong(SOPHUC sp[], int n)
{
	SOPHUC s=sp[0];
	for(int i=1;i<n;i++)
	{
		s=tong(s,sp[i]);
	}
	return s;
}
SOPHUC tich(SOPHUC sp1, SOPHUC sp2)
{
	SOPHUC temp;
	temp.a=sp1.a*sp2.a-sp1.b*sp2.b;
	temp.b=sp1.a*sp2.b+sp1.b*sp2.a;
	return temp;
}
SOPHUC mangtich(SOPHUC sp[], int n)
{
	SOPHUC p=sp[0];
	for(int i=1;i<n;i++)
	{
		p=tich(p,sp[i]);
	}
	return p;
}
int main()
{
	SOPHUC sp1,sp2,sp[100],s,p;
	int n,i;
	cout<<"*** Nhap so luong cac so phuc ***";  
	cout<<"\nNhap n: ";
	cin>>n;
	cout<<"*** Nhap mang cac so phuc ****";  
	cout<<"\n"; 
	nhapmang(sp,n);
	cout<<"*** Mang cac so phuc vua nhap ***";
	cout<<"\n"; 
	xuatmang(sp,n);
	cout<<"\n"; 
	
	s=mangtong(sp,n);
	p=mangtich(sp,n);
	cout<<"*** Tong mang cac so phuc ***";
	cout<<"\n"; 
	Xuat(s);
	cout<<"\n";
	cout<<"*** Tich mang cac so phuc ***";
	cout<<"\n"; 
	Xuat(p);
	cout<<"\n";
	
	
	
	
}