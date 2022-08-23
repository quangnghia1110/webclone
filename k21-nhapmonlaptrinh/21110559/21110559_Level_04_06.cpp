#include<stdio.h>
int main()
{
    int n,i,count = 0;;
    printf("nhap so nguyen duong n =  "); scanf("%d", &n);
    while (n > 0) {
        i = n % 10;
        n = n / 10;
        if (i == 2 || i == 3 || i == 5 || i == 7) {
            count++;
        }
    }
    printf("n co %d chu so nguyen to", n, count);

}
