#include<iostream>
#include<string.h>
using namespace std;
void nhap(int A[], int &m, int &n)
{
	cin>>m>>n;
	for(int i=0;i<m*n;i++)
	{
		cin>>A[i];
	}
}
void xuat(int A[],int m,int n)
{
	for(int i=0;i<m*n;i++)
	{
		cout<<A[i]<<" ";
	}
}
void chuyen1sang2(int A[], int m, int n, int B[][100])
{
	int k=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			B[i][j]=A[k++];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cout<<B[i][j]<<" ";
		cout<<endl;
	}
	
}
int main()
{
	int m,n, A[100],B[100][100];
	nhap(A,m,n);
	xuat(A,m,n);
	cout<<"\n";
	chuyen1sang2(A,m,n,B);
}