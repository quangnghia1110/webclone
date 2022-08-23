#include<stdio.h>
int chiahet(int m, int a, int b);
int main()
{
    int a, b, n, s=0;
    printf("Nhap a: ");scanf("%d",&a);
	printf("Nhap b: ");scanf("%d",&b);
	printf("Nhap n: ");scanf("%d",&n);
    if(a<n && b<n)
    {

       for (int i=1; i<n; i++)
        {
            if(chiahet(n, a, b) == 1)
            s+=i;
         }
    }
    printf("tong cac so nguyen < n chia het cho a nhung khong chia het cho b la %d\n", s);
}
int chiahet(int m,int a, int b)
{

    if (m%a==0 && m%b!=0)
        return 1;
    return 0;
}

    

    