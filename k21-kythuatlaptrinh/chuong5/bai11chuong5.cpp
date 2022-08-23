#include<iostream>
using namespace std;
void xuat(int a[], int n)
{
	
	for(int i=0;i<n;i++)
		cout<<a[i];
	cout<<"\n";
}
void sinhtapcon(int n)
{
	int a[50]={0};
	
	int k=1;
	xuat(a,k);
	while(a[0]<n-1)
	{
		while(a[k-1]<n-1)
		{
			a[k]=a[k-1]+1;
			k++;
			xuat(a,k);
		}
		if(k>1)
		{
			k--;
			a[k-1]++;
			xuat(a,k);
		}
	}
}
int main()
{
	int n;
	cin>>n;
	cout<<"rong"<<"\n";
	sinhtapcon(n);
}