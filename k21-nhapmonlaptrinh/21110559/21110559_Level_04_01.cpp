
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	int n,i;
	printf("Nhap n: ");scanf("d",&n);
	for(i=0;i*i<=n;i++)
	{	
		if(i*i==n){
		
		printf("Day la so chinh phuong\n",n);
		return 0;}
	}
	printf("%d khong la so chinh phuong\n",n);
}
