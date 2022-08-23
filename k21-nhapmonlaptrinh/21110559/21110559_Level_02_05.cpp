#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int a,b,c,d,max1,max2,max;
	printf("nhap so nguyen a: ");scanf("%d", &a);
	printf("nhap so nguyen b: ");scanf("%d", &b);
	printf("nhap so nguyen c: ");scanf("%d", &c);
	printf("nhap so nguyen d: ");scanf("%d", &d);
	max1=a;
	max2=b;
	if (a<c)
		max1=c;
	if (b<d)
	 	max2=d;
	max=max1;
	if(max2>max1)
 		max=max2;
 	
		printf("So nguyen lon nhat la: %d",max);
		printf("\n");	
	return 0;
}