#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	a[n]=0;
	int m;	
	scanf("%d",&m);
	if(m>=a[n-1])
	{	
		a[n]=m;
	}
	else if(m<=a[0])
	{
		for(int j=n;j>=1;j--)
		{
			a[j]=a[j-1];
		}
		a[0]=m;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(m==a[i])
			{
				for(int j=n;j>=i+2;j--)
				{
					a[j]=a[j-1];
				}
				a[i+1]=m;
				break;
			}
			if(a[i]<m && m<a[i+1])
			{
				for(int j=n;j>=(i+2);j--)
				{
					a[j]=a[j-1];
				}
				a[i+1]=m;
				break;
			}
		}
	}
	for(int i=0;i<=n;i++)
	{
		printf("%d",a[i]);
	}
}