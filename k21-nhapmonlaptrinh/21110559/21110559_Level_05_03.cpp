#include <stdio.h>
int nguyento(int n)
{	
	for (int i=2;i<=n;i++)
		if (n%i==0)
		{
			return 1;
				break;
		}
	return 0;
}
int main()
{
	int i,n,dem=0;
	printf("Nhap vao so nguyen n: ");scanf("%d",&n);
	for (i=2;i<n;i++)
	{
		if(nguyento(i)==1) 
		{
			dem=dem+1;
		}
	}
	printf("\nTong cac so nguyen to la: %d\n",dem);
}
