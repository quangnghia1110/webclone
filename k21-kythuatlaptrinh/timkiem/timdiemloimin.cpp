#include<iostream>
using namespace std;
int X[4]={0,0,1,-1};
int Y[4]={-1,1,0,0};
void nhapmang(int a[][100], int &m, int &n)
{
	cin>>m>>n;
	for(int i=2;i<m+2;i++)
		for(int j=2;j<n+2;j++)
			cin>>a[i][j];
}
void xuat(int x)
{
	cout<<x;
}
int ladiemloi(int a[][100],int i,int j)
{
	for(int k=0;k<4;k++)
		if(a[i][j]<=a[i+X[k]][j+Y[k]])
			return 0;
	return 1;
		
}
int xuatgiatri(int a[][100],int m, int n)
{
	for(int i=2;i<m+2;i++)
		for(int j=2;j<n+2;j++)
			if(ladiemloi(a,i,j))
				cout<<a[i][j]<<" ";
}
int tong(int a[][100],int m, int n)
{
	int sum=0;
	for(int i=2;i<m+2;i++)
		for(int j=2;j<n+2;j++)
			if(ladiemloi(a,i,j))
				sum=sum+a[i][j];
	return sum;
}
int demdiemloi(int a[][100], int m ,int n)
{
	int dem=0;
	for(int i=2;i<m+2;i++)
		for(int j=2;j<n+2;j++)
			if(ladiemloi(a,i,j))
				dem++;
	return dem;
}
int timmin(int a[],int n)
{
	int min=a[0];
	for(int i=1;i<n;i++)
		if(a[i]<min)
			min=a[i];
	return min;
}
int timmindiemloi(int a[][100],int m, int n)
{
	int B[10000],nB=0;
	for(int i=2;i<m+2;i++)
		for(int j=2;j<n+2;j++)
			if(ladiemloi(a,i,j))
				B[nB++]=a[i][j];
	int min=timmin(B,nB);
	return min;
}
int timvitri(int a[],int n)
{
	int min=a[0];
	int vitri=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			vitri=i;
		}
	}
	return vitri;
}
int timvitridiemloi(int a[][100],int m,int n,int C[],int D[])
{
	int B[10000],nB=0;
	for(int i=2;i<m+2;i++)
	{
		for(int j=2;j<n+2;j++)
		{
			if(ladiemloi(a,i,j))
			{
				B[nB++]=a[i][j];
				C[nB]=i;
				D[nB]=j;
				nB++;	
			}
		}
	}
	int vitri=timvitri(B,nB);
	return vitri;
}
int main()
{
	int a[100][100]={0},m,n,C[10000],D[10000];
	nhapmang(a,m,n);
	xuatgiatri(a,m,n);
	cout<<"\n";
	int kq1=demdiemloi(a,m,n);
	xuat(kq1);
	cout<<"\n";
	int kq2=tong(a,m,n);
	xuat(kq2);
	cout<<"\n";
	int kq3=timmindiemloi(a,m,n);
	xuat(kq3);
	cout<<"\n";
	int kq4=timvitridiemloi(a,m,n,C,D);
	xuat(D[kq4]-2);
	cout<<"-";
	xuat(C[kq4]-2);		
}
/*3 4
3 9 5 6
4 6 8 7
8 11 7 10*/