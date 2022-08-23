#include <stdio.h>
int main()
{
	int i,a[6],c=0,j,dem=0;
	for(i=0;i<6;i++)
	do{printf("Moi ban nhap gia tri cho phan tu a[%d]: ",i);
	scanf("%d",&a[i]);}while(a[i]<=0);
	for(i=0;i<6;i++)
	{
		c=0;
		if(a[i]==1)
		c++;
		for(j=2;j<a[i];j++)
		if(a[i]%j==0)
		c++;
		if(c==0)
		{dem++;
		printf("%d la so nguyen to\n",a[i]);
		}
	}
	if(dem==0)
	printf("mang ko co so nguyen to");
}
