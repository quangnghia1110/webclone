#include<iostream>
using namespace std;
int a[101][101]={0},n=5;
int dem=0;
int X[8]={-2,-2,-1,1,2,2,1,-1};
int Y[8]={-1,1,2,2,1,-1,-2,-2};
void xuat()
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
void dituan(int x, int y)
{
	dem++;
	a[x][y]=dem;
	
	for(int i=0;i<8;i++)
	{
		int xx=x+X[i];
		int yy=y+Y[i];
		if(xx>=0&&xx<n&&yy>=0&&yy<n&&a[xx][yy]==0)
		{
			dituan(xx,yy);
		}
	}
	
}
int main()
{
	dituan(0,0);
	xuat();

}
