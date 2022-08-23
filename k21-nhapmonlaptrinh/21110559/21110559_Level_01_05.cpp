#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int x;
	printf("nhap nam: ");scanf("%d",&x);
	if(x%4==0)
		printf("%d chinh la nam nhuan \n",x);
	else
		printf("%d khong la nam nhuan \n",x);
	return 0;
}