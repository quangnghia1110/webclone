#include<stdio.h>
#include<math.h>
int main()
{
	int sum=0,s=1,n;
	printf("Nhap n: ");scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		s=s*i;
		sum=sum+s;
	}
	printf("tong la %d",sum);
	return 0;
}
