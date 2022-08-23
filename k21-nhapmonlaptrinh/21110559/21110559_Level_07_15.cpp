#include<stdio.h>
int main()
{
	int a[1000],n,i,dem,j,d;
	printf("nhap vao so phan tu cau mang n= ");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("nhap vao so phan tu %d:",i+1);scanf("%d",&a[i]);
	}
	d=a[1]-a[0];
	dem=0;
	for(j=1;j<n;j++)
	{
		if(a[j]!=(a[0]+j*d))
		{
			dem++;
			break;
		}
	}
	if(dem==0)
	{
		printf("Co");

	}
	else
	{
		printf("Khong");
	}
}
