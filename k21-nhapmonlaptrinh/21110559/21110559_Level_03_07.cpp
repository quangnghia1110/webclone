#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int n,s=0;
	printf("Nhap so nguyen n: ");scanf("%d",&n);
	while (n>0){
		s=s+n%10;
		n=n/10;
	}
	printf("Tong cac chu so cua n: %d\n",s);
	return 0;
}