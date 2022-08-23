#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int a[100],n,i,sum=0;
	printf("nhap n: ");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Moi ban nhap gia tri cho phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("Tong gia tri cac phan tu cua mang la %d",sum);
	printf("\n");	
}

