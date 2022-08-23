#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int n,i,S=0;
	printf("Nhap so nguyen n: ");scanf("%d", &n);
	if(n<=0){
		printf("Vui long nhap lai so nguyen n\n");
		return 0;}
	printf("Cac uoc so cua %d la: ",n);
  for(int i = 1; i <= n; i++)
  {
    if(n % i == 0)
    {
      printf("%4d", i);
      S = S + i;
  }}
  printf("\ntong cac uoc so %d là: %ld", n, S);
  return 0;
}