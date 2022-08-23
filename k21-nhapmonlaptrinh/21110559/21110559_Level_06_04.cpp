#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int a[100],n,i,sum=0,trungbinh=0,dem=0;
	printf("nhap n: ");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Moi ban nhap gia tri cho phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	do{
		for(i=0;i<n;i++)
		{
			if(a[i]%5==0)
			{
				sum=sum+a[i];
				dem++;
			}
		}}while(a[i]<=0);}
	printf("Gia tri trung binh cac phan tu cua mang la %.f",(float)sum/dem);
	printf("\n");	
}

