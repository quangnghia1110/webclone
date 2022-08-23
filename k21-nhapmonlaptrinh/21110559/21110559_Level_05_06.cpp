#include <stdio.h>
int chinhphuong(int n)
{	
	for (int i=1;i*i<=n;i++)
		if (i*i==n)
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
	for (i=1;i<n;i++)
	{
		if(chinhphuong(i)==1) 
		{
			dem=dem+1;
		}
	}
	printf("\nTong cac so chinh phuong la: %d\n",dem);
}
