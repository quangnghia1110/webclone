#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int a,b;
	printf("Nhap a: ");scanf("%d",&a);
	printf("Nhap b: ");scanf("%d",&b);
	if(b>0)
		printf("Thuong so la: %d\n",a/b);
	else if (b<0)
		printf("Thuong so la: %d\n",a/b);
	else
		printf("khong chia duoc \n");
	return 0;
}