#include<iostream>
using namespace std;
int a[101];
int n;
int dem;
void xuat()
{
	dem++;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
bool check()
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==1&&a[i+1]==1)
			return false;
	}
	return true;
}
void lietke(int k)
{
	if(k==n)
	{
		if(check())
		{
			xuat();
		}
	}
	else
	{
		for(int i=0;i<=1;i++)
		{
			a[k]=i;
			lietke(k+1);
		}
	}
}
int main()
{
	cin>>n;
	dem=0;
	lietke(0);
	cout<<dem;
}