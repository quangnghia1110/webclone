#include<iostream>
#include<string.h>
using namespace std;
void nhap(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Phan tu thu "<< i<<": ";
		cin>>a[i];
	}
}
void xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
	
		cout<<a[i];
	}
}
void chen(int a[],int &n)
{
	int pos, val;
	cout<<"\n";
	cout<<"Nhap vi tri can chen: ";
	cin>>pos;
	cout<<"Nhap gia tri can chen: ";
	cin>>val;
	for(int i=n;i>pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=val;
	++n;
	cout<<"Mang sau khi chen la: ";
	xuat(a,n);
}
void xoa(int a[],int &n)
{
	int pos;
	cout<<"\nNhap vi tri can xoa: ";
	cin>>pos;
	for(int i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	--n;
	cout<<"Mang sau khi xoa la: ";
	xuat(a,n);
}
void sua(int a[],int n)
{
	int pos,val;
	cout<<"\nNhap vi tri can sua: ";
	cin>>pos;
	cout<<"Nhap gia tri can sua: ";
	cin>>val;
	a[pos]=val;
	cout<<"Mang sau khi sua la: ";
	xuat(a,n);
}
void timkiem(int a[],int n)
{
	
	int val;
	cout<<"\nNhap phan tu can tim: ";
	cin>>val;
	a[n]=val;
	int i=0;
	while(a[i]!=val)
		i++;
	if(i<n)
		cout<<a[i]<<" la phan tu can tim kiem co trong mang";
	else
		cout<<"Khong co phan tu can tim kiem trong mang";
		
}
int main()
{
	int n;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	int a[100];
	nhap(a,n);
	cout<<"Mang sau khi nhap la: ";
	xuat(a,n);
	chen(a,n);
	xoa(a,n);
	sua(a,n);
	timkiem(a,n);
}
