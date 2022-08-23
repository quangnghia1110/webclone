#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
  	int n,i,s=1;
    	printf("Nhap vào so nguyen duong n: ");scanf("%d", &n);
  	for(i = 1; i <= n; i++)

  		s=s*i;

	
 	printf("giai thua cua %d = %d\n", n,s);
 	return 0;
 
}
