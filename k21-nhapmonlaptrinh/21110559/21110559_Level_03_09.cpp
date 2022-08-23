#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int a,b;
	printf("Nhap so nguyen a: ");scanf("%d",&a);
	printf("Nhap so nguyen b: ");scanf("%d",&b);
	while(a!=b){
		if(a>b)
		{
			a=a-b;
		}
		else
			b=b-a;
	}
	printf("Uoc so chung lon nhat la: %d\n",a);
	return 0;
}