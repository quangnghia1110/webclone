#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int a,b,c,nhi,nhat;
	printf("nhap so nguyen a: ");scanf("%d",&a);
	printf("nhap so nguyen b: ");scanf("%d",&b);
	printf("nhap so nguyen c: ");scanf("%d",&c);
	nhi = a;
	if (nhi > b)
	{
		nhi = b; nhat = a;
	}
	else nhat = b;
	if (nhi > c)
		printf("so nho nhi la %d\n", nhi);
	else {
		if (c< nhat)
			printf("so nho nhi la %d\n", c);
		else 
			printf("so nho nhila %d\n", nhat);}
	return 0;
}