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
	cout<<x;
}
int ladiemlom(int a[][100],int i,int j)
{
	int X[4]={0,0,1,-1};
	int Y[4]={-1,1,0,0};
	for(int k=0;k<4;k++)
		if(a[i][j]>=a[i+X[k]][j+Y[k]])
			return 0;
	return 1;
		
}
int demdiemlom(int a[][100], int m ,int n)
{
	int dem=0;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			if(ladiemlom(a,i,j))
				dem++;
	return dem;
}
int timmax(int a[],int n)
{
	int max=a[0];
	for(int i=1;i<n;i++)
		if(a[i]<max)
			max=a[i];
	return max;
}
int timgiatrimaxlom(int a[][100],int m, int n)
{
	int B[10000],nB=0;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			if(ladiemlom(a,i,j))
				B[nB++]=a[i][j];
	int max=timmax(B,nB);
	return max;
}
int timvitrimax(int a[],int n)
{
	int max=a[0];
	int vitri=0;
	for(int i=1;i<n;i++)
		if(a[i]<max)
		{
			max=a[i];
			vitri =i;
		}
	return vitri;
	
}
int timvitri(int a[][100],int m,int n, int d[], int c[])
{
	int B[10000],nB=0;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			if(ladiemlom(a,i,j))
			{
				B[nB++]=a[i][j];
				d[nB]=i;
				c[nB]=j;
				nB++;
			}
	int vitri=timvitrimax(B,nB);
	return vitri;
}
int main()
{
	int a[100][100]={0},m,n,x;
	nhapmang(a,m,n);
	xuatmang(a,m,n);
	cout<<"DEM DIEM LOM: ";
	int kq1=demdiemlom(a,m,n);
	xuat(kq1);
	cout<<"\n";
	cout<<"MIN DIEM LOM: ";
	int kq2=timgiatrimaxlom(a,m,n);
	xuat(kq2);
	int d[10000];
	int c[10000];
	cout<<"\n";
	cout<<"VI TRI DIEM LOM MAX: ";
	int vitri=timvitri(a,m,n,c,d);
	xuat(d[vitri]-1);
	cout<<"\t";
	xuat(c[vitri]+1);
}