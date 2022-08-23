#include<stdio.h>
int kiemtratinhchatamduong(int a[],int n)
{
	for( int i=1;i<n;i++)
	{
		if(a[i]<0&&a[i-1]<0)
			return 0;
		if(a[i]>0&&a[i-1]>0)
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
	printf("%d",kiemtratinhchatamduong(a,n));
}