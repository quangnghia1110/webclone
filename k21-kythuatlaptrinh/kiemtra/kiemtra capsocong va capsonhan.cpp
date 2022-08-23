#include<stdio.h>
int kiemtracapsocong(int a[], int n)
{
	int d=a[1]-a[0];
	for(int i=2;i<n;i++)
	{
		int hieu=a[i]-a[i-1];
		if(hieu!=d)
		return 0;
	}
	return 1;
}
int kiemtracapsonhan( int a[], int n)
{
	if(a[1]%a[0]!=0)
	return 0;
	int q=a[1]/a[0];
	for(int i=2;i<n;i++)
	{
		if(a[i]%a[i-1]!=0)
		return 0;
		int thuong=a[i]/a[i-1];
		if(thuong!=q)
		return 0;
	}
	return 1;	
}
int main()
{
	int n, a[10000];
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	scanf("%d",&a[i]);
	printf("%d\n",kiemtracapsocong(a,n));
	printf("%d\n",kiemtracapsonhan(a,n));
	
}