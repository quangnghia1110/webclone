#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int a[100],n,i;
	printf("nhap n: ");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Moi ban nhap gia tri cho phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d",i,a[i]);
		printf("\n");
	}	
	
}

