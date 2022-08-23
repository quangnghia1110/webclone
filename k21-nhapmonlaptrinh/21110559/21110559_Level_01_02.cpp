#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int n;
	printf("Nhap so nguyen n: "); scanf("%d", &n);
	if (n<0)
		n=-n;
	printf("Tri tuyet doi cua n la: %d\n", n);
	return 0;
}