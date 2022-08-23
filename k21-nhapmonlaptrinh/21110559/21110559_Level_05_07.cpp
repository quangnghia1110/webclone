#include <stdio.h>
int main(){
    int n,dem=0,demtong=0;
    printf("Nhap n = ");scanf("%d", &n);
    for(int i = 2; i <= n; i++)
	{
        while(n % i == 0)
		{
            ++dem;
            n /= i;
    	}
    	for(int i=2;i<=n;i++)
        {
        	
            if(dem <= 1)
			{  
				printf("%d la cac uoc so\n", i);
				demtong++;
		 	}
		}
    }

    printf("vay co %d uoc so la so nguyen to\n",demtong);
    
}
