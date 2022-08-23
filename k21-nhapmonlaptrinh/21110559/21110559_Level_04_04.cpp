#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	int n,d,m,dao;  
	printf("Nhap n:"); scanf("%d", &n);
	m = n;
	dao = 0;
	while (m > 0)
	{		
		d = m % 10;
		dao = 10 * dao + d;	
		m /= 10;
	}
	
		
	
	if(dao == n) 
        printf("%d la so doi xung", n);
    else
        printf("%d khong doi xung", n);	
}
