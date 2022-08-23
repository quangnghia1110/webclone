#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int a[100],n,i,sum=0,dem=0;
	printf("nhap n: ");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Moi ban nhap gia tri cho phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			sum=sum+a[i];
			dem++;
		}
	
	}
	printf("Tong gia tri cac phan tu chan cua mang la %d",sum,dem);
	printf("\n");	
}

