#include<iostream>
#include<string.h>
using namespace std;

void nhap(int A[][100], int &m, int &n) 
{
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
			cin>>A[i][j];
	}
}
void xuat(int A[][100], int m, int n)
{
	cout<<endl;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
}
void chuyen(int A[][100], int m, int n)
{
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
			if(A[i][j]==1)
				A[i][j]=9;
	}
}
void taobaimin(int A[][100], int m, int n)
{
	chuyen(A,m,n);
	int X[8]={-1,-1,-1, 0, 1, 1, 1, 0};
	int Y[8]={-1, 0, 1, 1, 1, 0,-1,-1};
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
			if(A[i][j]==0)
				for(int k=0;k<8;k++)
					if(A[i+X[k]][j+Y[k]]==9)
						A[i][j]++;
	}
}
int main()
{
	int A[100][100]={0};
	int m,n;
	nhap(A,m,n);
	taobaimin(A,m,n);
	xuat(A,m,n);
}