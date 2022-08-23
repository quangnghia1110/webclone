#include<stdio.h>
int kiemtratinhchatchanle(int a[], int n )
{
	for( int i=1;i<n;i++)
	{
		if(a[i]%2==0&&a[i-1]%2==0)
			return 0;
		if(a[i]%2==1&&a[i-1]%2==1)
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
	printf("%d",kiemtratinhchatchanle(a,n));
}