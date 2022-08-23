#include <stdio.h>
int chinhphuong(int n)
{	
	for (int i=1;i*i<=n;i++)
	{
		if (i*i==n)
		{
			return 1;
				break;
		}
	}
	return 0;
}
int main()
{
	int i,n;
	printf("Nhap vao so nguyen n: ");scanf("%d",&n);
	printf("\nCac so chinh phuong nho hon n la: ");
	for (i=1;i<=n;i++)
		if(chinhphuong(i)==1) 
		printf ("%d ",i);
	return 0;	
}
