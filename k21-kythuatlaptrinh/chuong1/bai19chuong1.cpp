#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int n;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		
		cin>>a[i];
	}
	FILE *fp;
	fp=fopen("D:/k21/k21-kythuatlaptrinh/SONGUYEN1.INP","wt");
	FILE *fp1;
	fp1=fopen("D:/k21/k21-kythuatlaptrinh/SOCHAN.OUT","wt");
	FILE *fp2;
	fp2=fopen("D:/k21/k21-kythuatlaptrinh/SOLE.OUT","wt");
	if(fp==NULL)
	{
		cout<<"KHONG MO DUOC FILE \n";
		return -1;
	}
	for(int i=0;i<n;i++)
	{
		fprintf(fp,"%d ", a[i]);
		cout<<a[i]<<" ";
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			fprintf(fp1,"%d ", a[i]);
			
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			fprintf(fp2,"%d ", a[i]);
			
		}
		
	}
	fclose(fp);
	
}
