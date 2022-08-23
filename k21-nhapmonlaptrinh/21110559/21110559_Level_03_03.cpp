#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
  	int n,s=0;
    	printf("Nhap vào so nguyen duong n: ");scanf("%d", &n);
  	for(int i = 1; i <= n; i++)
  {
    	s = s + 1.0 / i;
  }

  	printf("Tong 1 + 1/2 + ... + 1/%d la: %.2f\n",n, s);
 	return 0;
 
}