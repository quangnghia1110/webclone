#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int donvi,n,max;
	printf("Nhap n = ");scanf("%d",&n);
	while(n>0)
	{
		donvi=n%10;
		printf("%d\n",donvi);
		n=n/10;
		if(donvi>max)
		{
			max=donvi;
		}	
	}
	printf("\nChu so lon nhat la : %d",max);
}


