#include<stdio.h>
#include<string.h>
#include<math.h>
void count(float a[],int n)
{
	float b[1000];
	int x=1;
	b[0]=a[0];
	for( int i=1; i<n;i++)
	{
		int dem=0;
		for(int j=0;j<x;j++)
			if(a[i]==b[j])
			{
				dem++;
			}
			if(dem==0)
			{
				b[x]=a[i];
				x++;
			}
	}
	printf("%d",x);
}
int main()
{
	float a[1000];
	int n;
	scanf("%d",&n);
	for( int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	count(a,n);
	return 0;
}
