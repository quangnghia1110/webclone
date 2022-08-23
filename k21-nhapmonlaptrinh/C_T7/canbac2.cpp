#include<stdio.h> 
#include<math.h>#include<stdio.h> 
int main()
{
    float a, b, c, delta, x1, x2;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a == 0) {
        if(b == 0) {
            if (c == 0) {
                printf("4");
            }
            else
            {
                printf("0");
            }
        }
        else 
        {
            printf("1");
        }
        }
    else 
    {
        delta = b*b - 4*a*c;
        if(delta > 0) 
        {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            return 2;
           	printf("2");
        }
        else if ( delta == 0)
        {
            printf("3");
        }
	}
}
