#include<iostream>
using namespace std;
int a[100],b[100]={0},n,dem;
int c[100][100];
int chiphitoiuu=INT_MAX;
int H[100];
void xuat()
{

	for(int i=0;i<n;i++)
		cout<<H[i]<<" ";
	cout<<endl;
}
void tinhchiphi()
{
	int chiphi=0;
	for(int i=0;i<n-1;i++)
		chiphi=chiphi+c[a[i]][a[i+1]];
	chiphi=chiphi+c[a[n-1]][a[0]];
	if(chiphi<chiphitoiuu)
	{
		chiphitoiuu=chiphi;
		for(int j=0;j<n;j++)
			H[j]=a[j];
	}
}
void lietke(int k)
{
	if(k==n)
		tinhchiphi();
	else
	{
		for(int i=0;i<n;i++)
		{
			if(b[i]==0)
			{
				a[k]=i;
				b[i]=1;
				lietke(k+1);
				b[i]=0;
			}
		}
	}
}
void nhap()
{
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>c[i][j];
}
int main()
{
	nhap();
	dem=0;
	lietke(0);
	xuat();
	cout<<chiphitoiuu;
	return 0;
}