#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int n,i,counter =0;
	printf("Nhap so nguyen n>0: ");scanf("%d", &n);
	printf("Cac uoc so cua %d la: ",n);
  for(i = 1; i <= n; i++)
  {
    if(n % i == 0)
    {
   		printf("%4d", i);
	  	counter++;
  	}
  }
  printf("\nso nguyen %d co %d uoc so \n", n, counter);
  return 0;
}
