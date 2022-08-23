#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	float a,b,c;
	printf("nhap a: ");scanf("%f",&a);
	printf("nhap b: ");scanf("%f",&b);
	printf("nhap c: ");scanf("%f",&c);
	if(a + b <= c || a + c <= b ||  b + c <= a)
		printf("Tam giac khong hop le \n");
	else
	{	printf("Day la tam giac ");
	    if((a == b)&&(b== c))
			printf("deu \n");
		else
			if(a * a + b * b == c * c || a * c + c * c == b * b || b * b + c * c == a * c)
				printf("vuong \n");
		    else
		    	if(a == b || a == c || b == c)
	    		{
		    		if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(c*c+a*a==b*b))
		    			printf("vuong can");
	    			else
	    				printf("can \n");
		    	}
				else 
					printf("thuong \n");
	}
	return 0;
	
}
