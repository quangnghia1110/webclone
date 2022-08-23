#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()  
{  
	int n,i,m=0,count=0;  
	printf("Nhap n: "); scanf("%d",&n);  
	m=n/2;  
	for(i=2;i<=m;i++)  
	{	  
		if(n%i==0)  
		{		  
			printf("\nSo vua nhap khong la so nguyen to.");  
			count++;  
		}  
	}	  
	if(count==0)  
 		printf("\nSo vua nhap la so nguyen to.");  
}  

