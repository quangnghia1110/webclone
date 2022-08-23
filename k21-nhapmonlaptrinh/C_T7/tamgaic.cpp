#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a<b+c&&b<a+c&&c<b+a)
    {
        if(a==b&&b==c)
        {
            printf("0");
        }
        else if(a==b||b==c||a==c)
        {
            printf("1");
        }
        else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b)
        {
            printf("2");
        }
        else 
        {
            printf("3");
        }
    }
    else
    {
        printf("4");
    }
}