#include<stdio.h>
void tangdan(int a[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
}
void giamdan(int a[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]<a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
}

int main()
{
	int n,a[10000];
	scanf("%d",&n);
	for( int i=0;i<n;i++)
	scanf("%d",&a[i]);
	tangdan(a,n);
	for( int i=0;i<n;i++)
	printf("%d",a[i]);
	printf("\n");
	giamdan(a,n);
	for( int i=0;i<n;i++)
	printf("%d",a[i]);
	
	
}