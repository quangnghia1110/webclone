#include<iostream>
#include<string.h>
using namespace std;
void nhap(int &n,int &m ,int a[][100] )
{
	cout<<"Nhap so dong: ";
	cin>>n;
	cout<<"Nhap so cot: ";
	cin>>m;
	for(int i=0;i<n;i++)
  	{
  		for(int j=0;j<m;j++)
  		{	
  			cin>>a[i][j];
		}
	}
}
void xuat(int n,int m, int a[][100])
{
	for(int i=0;i<n;i++)
  	{
  		for(int j=0;j<m;j++)
  		{
  			cout<<a[i][j];
		}
		cout<<"\n";
	}
}
void biendoi(int n,int m,int a[][100])
{
	int b[n*m],k=0;
 	for(int i=0;i<n;i++)
  	{
     	for(int j=0;j<m;j++)
     	{
        	b[k++]=a[i][j];
    	}
  	}
 	for(int z=0;z<k;z++)
 	{
 		cout<<b[z]<<" ";
 	}
}
int main()
{
	int a[100][100],n,m;
	nhap(n,m,a);
	xuat(n,m,a);
	biendoi(n,m,a);
	return 0;
}