#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int X[8]={-1,-1,-1,0,0,1,1,1};
int Y[8]={-1,0,1,-1,1,-1,0,1};
int temp;
int check(int a[][100],int m,int n)
{
	
	int dem=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			int dem1=0;
			int tong=0;
			for(int k=0;k<8;k++)
			{
                int xx=i+X[k],yy=j+Y[k];
				if(xx>=0&&xx<m&&yy>=0&&yy<n)
				{
					tong=tong+a[xx][yy];
					dem1++;
				}
			}
			float tbc=(float)tong/(float)dem1;
			if(abs(tbc-a[i][j])<temp)
				dem++;
		}
	}
	return dem;
		
					
}
void nhap(int a[][100],int m,int n)
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
}
int main()
{
	int m,n,a[100][100];
	cin>>m>>n>>temp;
	nhap(a,m,n);
	int kq=check(a,m,n);
	cout<<kq;
}