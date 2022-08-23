#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int h,m,s;
	printf("nhap gio: ");scanf("%d", &h);
	printf("nhap phut: ");scanf("%d", &m);
	printf("nhap giay: ");scanf("%d", &s);
	if((0<=h&&h<=23)&&(0<=m&&m<=59)&&(0<=s&&s<=59))
	{
		printf("%02d:%02d:%02d la hop le \n",h,m,s);
	else
		printf("%02d:%02d:%02d khong hop le",h,m,s);
		printf("\n");
	return 0;
}