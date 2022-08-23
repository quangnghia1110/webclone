
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
	if((0<=h&&h<=23)&&(0<=m&&m<=59)&&(0<=s&&s<=59)){
		printf("%02d:%02d:%02d la hop le \n",h,m,s);
		if(s==59){
			if(m==59){
				if(h==23){
				 	printf("Gio sau do mot giay la 00:00:00");}
		 		else
		 			printf("Gio sau do mot giay la %02d:00:00",h+1,m,s);}
 			else
 				printf("Gio sau do mot giay la %02d:%02d:00",h,m+1,s);}
		else
			printf("Gio sau do mot giay la %02d:%02d:%02d",h,m,s+1);}
	else
		printf("%02d:%02d:%02d khong hop le",h,m,s);
		printf("\n");
	return 0;
}