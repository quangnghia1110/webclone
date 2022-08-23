#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int a,b,max;
	printf("Nhap so nguyen a: ");scanf("%d", &a);
	printf("Nhap so nguyen b: ");scanf("%d", &b);
	max = a;
	if (b>max)
		max=b;
	printf("So nguyen lon nhat la: %d\n",max);
	return 0;
}
