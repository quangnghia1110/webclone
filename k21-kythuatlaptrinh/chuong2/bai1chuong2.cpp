#include<iostream>
#include<string.h>
using namespace std;
int tim(int a[],int n, int x)
{
	a[n]=x;
	int i=0;
	while(a[i]!=x)
		i++;
	if(i<n)
		return i;
	return -1;
		
}
int main()
{
	int n,x;
	int a[100];
	cin>>n;
	cin>>x;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int kq=tim(a,n,x);
	cout<<kq;
}
