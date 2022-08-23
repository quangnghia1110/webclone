
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main() 
{
	int a,b,c;
	double x1,x2,x,delta;
 	printf("Nhap he so bac 2 a = "); scanf("%d", &a);
    printf("Nhap he so bac 1 b = ");scanf("%d", &b);
    printf("Nhap so hang tu do c = "); scanf("%d", &c);
    if (a==0)
    	if(b==0)
    		if(c==0)
    			printf("PTB1 VO SO NGHIEM");
  			else
  				printf("PTB1 VO NGHIEM");
		else
		{
			x = -c / b;
			printf("PTB1 co nghiem x= %.2f",x);
		}
	else
		{
			delta=b*b-4*a*c;
			if (delta<0)
				printf("PTB2 vo nghiem");
			else
			{
				x1=(-b+sqrt(delta))/(2*a);
				x2=(-b-sqrt(delta))/(2*a);
				printf("PTB2 co nghiem x1=%.2f va x2=%.2f",x1,x2);
			}
		}
		printf("\n");
	return 0;
}
			
