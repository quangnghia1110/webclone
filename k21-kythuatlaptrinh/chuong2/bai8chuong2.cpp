#include<iostream>
using namespace std;
void nhapmang(int a[][100], int &m, int &n)
{
	cin>>m;
	cin>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
}
void xuatmang(int a[][100], int m, int n)
{
	
	for(int i=0;i<m+2;i++)
	{
		for(int j=0;j<n+2;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
void xuat(int x)
{
	cout<<x << " ";
}
int ladiemloi(int a[][100],int i,int j)
{
	int X[4]={0,0,1,-1};
	int Y[4]={-1,1,0,0};
	for(int k=0;k<4;k++)
		if(a[i][j]<=a[i+X[k]][j+Y[k]])
			return 0;
	return 1;
		
}

int timvitrimin( int a[], int n)
{
	int min=a[0];
	int vitri=0;
	for(int i=1;i<n;i++)
		if(a[i]<min)
		{
			min=a[i];
			vitri=i;
		}
	return vitri;
}
int timvitri(int a[][100],int m, int n,int d[],int c[])
{
	int B[10000],nB=0;
	for(int i=1;i<=m;i++)
	
		for(int j=1;j<=n;j++)
		
			if(ladiemloi(a,i,j))
			{
				B[nB]=a[i][j];
				d[nB]=i;
				c[nB]=j;
				nB++;
			}
	int vitri=timvitrimin(B,nB);
	return vitri;
}

int main()
{
	int a[100][100]={0},m,n,x;
	int d[10000],c[10000];
	nhapmang(a,m,n);
	xuatmang(a,m,n);
	int kq=timvitri(a,m,n,d,c);
	xuat(d[kq]-1);
	xuat(c[kq]-1);

}
