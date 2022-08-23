#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	float x;
	int y;
	printf("Nhap so thuc x: ");scanf("%f",&x);
	if (x>=0)
		y= (int)(x+0.5);
	else 
		y= (int)(x-0.5);
	printf("So lam tron %f la: %d\n",x,y);
	return 0;
}