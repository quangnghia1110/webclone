
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	float a,b,c;
	printf("nhap a: ");scanf("%f", &a);
	printf("nhap b: ");scanf("%f", &b);
	printf("nhap c: ");scanf("%f", &c);
	if ((a<b+c)&&(b<a+c)&&(c<a+b))
		printf("Day la ba canh cua tam giac\n",a,b,c);
	else 
		printf("Day khong la ba canh cua tam giac\n",a,b,c);
	return 0;
}
