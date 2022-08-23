#include<stdio.h>
#include<iostream>

using namespace std;
int main()
{
	int a[100];
	int n;
	cout<<"Nhap so phan tu: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap phan tu thu "<< i << ":";
		cin>>a[i];
	}
	FILE *fp;
	fp=fopen("D:/k21/k21-kythuatlaptrinh/input.txt","wt");
	if(fp==NULL)
	{
		cout<<"KHONG MO DUOC FILE \n";
		return -1;
	}
	fprintf(fp,"%d\n", n);
	cout<<"Mang vua doc duoc: \n";
	for(int i=0;i<n;i++)
	{
		fprintf(fp,"%d\n", a[i]);
		cout<<a[i]<<" ";
	}
	fclose(fp);
	
}
