#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int a[100], n, x;
    scanf("%d", &n);
    scanf("%d", &x);
   	float tb,sum = 0;
    int count = 0;
    int i;
    for (i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % x != 0) {
            sum += a[i];
            count++;
        }
    }
    if(count==0)
    	return 0;
   	else
   	{
		 tb=round(sum/count);
		 printf("%.f",tb);  	
   	}
}