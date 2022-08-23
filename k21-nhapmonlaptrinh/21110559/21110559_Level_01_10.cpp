#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{	float a;
	int b;
	printf("Nhap so thuc a: ");scanf("%f",&a);
	b=round(a);
	if (b>=a)
	{
		printf("so vua lam tron la %d\n",(b-1));}
	else
		printf("so vua lam tron la %d\n",b);

	return 0;
}