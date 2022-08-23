#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int a,b,c,min;
	printf("nhap so nguyen a: ");scanf("%d", &a);
	printf("nhap so nguyen b: ");scanf("%d", &b);
	printf("nhap so nguyen c: ");scanf("%d", &c);
	min=a;
	if (min>b)
		min=b;
	else if (min>c)
	 	min=c;
 		printf("So nguyen nho nhat la: %d\n",min);	
	return 0;
}