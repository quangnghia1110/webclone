
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()  
{  
	int n,i,sum=0;  

	printf("Nhap n: "); scanf("%d",&n);  
	for(i=1;i<n;i++)  
		if(n%i==0)  
			sum=sum+i;		  
	if(n==sum)  
 		printf("\nSo vua nhap la so hoan hao",n);  
 	else
 		printf("\nSo vua nhap khong la so hoan hao",n);  
}  
