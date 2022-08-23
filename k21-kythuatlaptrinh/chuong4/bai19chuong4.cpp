#include<iostream>
#include<math.h>
using namespace std;
int a[8];
bool kiemtra(int x2,int y2)
{
	for(int i=1;i<x2;i++)
		if(a[i]==y2||abs(i-x2)==abs(a[i]-y2))
			return false;
	return true;
}
void xuat(int n)
{
	for(int i=1;i<=n;i++)
		cout<<" "<<a[i];
	cout<<endl;
}
void test(int i, int n)
{
	for(int j=1;j<=n;j++)
		if(kiemtra(i,j))
		{
			a[i]=j;
			if(i==n)
				xuat(n);
			test(i+1,n);
		}
}
int main()
{
	int n=8;
	test(1,n);
	return 0;
}