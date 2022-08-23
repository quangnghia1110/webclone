#include <stdio.h>
#include <conio.h>
 
int main(void)
{
    int max,min,mn,tp;
    scanf("%d",&min);
    if (max<min)
    {
        max+=min;
        min=max-min;
        max-=min;
    }
    mx=min;
    mn=max;
    for (short unsigned int i=0;i<3;i++)
    {
        scanf("%d",&tp);
        if (tp<min)
        {
            mn=min;
            min=tp;
        }
        if (tp>min && tp<mn) mn=tp;
    }
    printf("%d",mn);
    return 0;
}