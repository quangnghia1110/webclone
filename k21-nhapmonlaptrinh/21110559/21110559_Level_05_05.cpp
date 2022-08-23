#include <stdio.h>
int hoanhao(int n)
{	
    int sum=0;
	for (int i=1;i<n;i++)
		if (n%i==0)
		{
			sum=sum+i;
		}
	if(sum==n)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int i,n;
	printf("Nhap vao so nguyen n: ");scanf("%d",&n);
	printf("\nCac so hoan hao nho hon n la: ");
	for (i=1;i<n;i++)
		if(hoanhao(i)==1) 
		printf ("%d ",i);
	return 0;	
}
