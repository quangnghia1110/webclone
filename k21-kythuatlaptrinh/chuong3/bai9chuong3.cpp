#include<iostream>
#include<string.h>
using namespace std;
int giamdan(int n,int a[])
{
	int tam;
	for(int i=0;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(a[i]<a[j])
			{
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
}
void chen(int &n, int a[], int k,int x)
{
	n++;
	for(int i = n -1; i > k; i--) {
		a[i] = a[i - 1];
	}
	a[k] = x;
}
void chenvaomanggiamdan(int a[],int &n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]<=x)
		{
			chen(n,a,i,x);
			break;
		}
	}
}
void xuat(int n,int a[])
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}	
}

int main()
{
	int n,x,k;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	giamdan(n,a);
	xuat(n,a);
	cout<<"\n";
	cin>>x;
	chenvaomanggiamdan(a,n,x);
	xuat(n,a);
	
}
