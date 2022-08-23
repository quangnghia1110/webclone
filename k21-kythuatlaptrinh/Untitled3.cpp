#include<iostream>
#include<math.h>
#include<string.h>
int a[10001];
using namespace std;
bool check(int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==1&&a[i+1]==1)
		{
			return false;
		}
	}
	return true;
}
void xuat(int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			cout<<"A";
		}
		else
		{
			cout<<"B";
		}
	}
	cout<<endl;
}
void duyet(int n,int k)
{
	if(k==n)
	{
		if(check(n))
		{
			xuat(n);
		}
	}
	else
	{
		for(int i=0;i<=1;i++)
		{
			a[k]=i;
			duyet(n,k+1);
		}
	}
}
int main()
{
	int n;
    cin >> n;
    duyet(n, 0);
}
