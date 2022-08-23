#include<stdio.h>
#include<math.h>
int main()
{
	for(int i = 10; i < 99 ;++i)
    {
        int chuso, temp = i; 
		chuso = temp/10; 
        temp %= 10;      
        int tong = chuso + temp;
        int tich = chuso * temp;
        if(tich == 2*tong)
        {
	        printf("so can tim la: %d\n", i);
        }
    }
    return 0;
}
	
	
