#include<stdio.h>
bool tangdan(int a[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				return false;
			}
	return true;
}
bool giamdan(int a[],int n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				return true;
			}
	return false;
}

int main()
{
	int n,a[10000];
	scanf("%d",&n);
	for( int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int kq1=tangdan(a,n);
	printf("%d",kq1);
	printf("\n");
	int kq2=giamdan(a,n);
	printf("%d",kq2);
	printf("\n");
	
}