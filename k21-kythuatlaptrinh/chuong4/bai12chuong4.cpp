#include<iostream>
#include<math.h>
using namespace std;

void xuat(int a[],int n)
{
	cout<<"{ ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"}"<<endl;
}
void lietke(int n,int k)
{
	int a[100];
	for(int i=0;i<k;i++)
		a[i]=i;
	xuat(a,k);
	int i=k-1;
	while(i>=0)
	{
		while(a[i]<n-k+i)
		{
			a[i]++;
			for(int j=i+1;j<k;j++)
				a[j]=a[j-1]+1;
			xuat(a,k);
			i=k-1;
		}
		i--;
	
	};
}
int main()
{
	int n, k;
	cin>>n;
	for(int k=0;k<=n;k++)
		lietke(n,k);
	return 0;
}