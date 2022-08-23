#include "stdio.h"
#include "conio.h"
 
int main()
{
    printf("Nhap so tien: ");
    int x = 0;
    scanf("%d", &x);
 
    int soto_100000 = 0;
    int soto_50000 = 0;
    int soto_20000 = 0;
    int soto_10000 = 0;
 
    for (int i = 1; i > 0;)
    {
        if (x == 0)
        {
            break;
        }
 
        if (x >= 100000)
        {
            x -= 100000;
            soto_100000++;
        }
        else if ((x < 100000) && (x >= 50000))
        {
            x -= 50000;
            soto_50000++;
        }
        else if ((x < 50000) && (x >= 20000))
        {
            x -= 20000;
            soto_20000++;
        }
        else if (x == 10000)
        {
            x -= 10000;
            soto_10000++;
        }
    }
 
    printf("So to 100000: %d to\n", soto_100000);
    printf("So to 50000: %d to\n", soto_50000);
    printf("So to 20000: %d to\n", soto_20000);
    printf("So to 10000: %d to\n", soto_10000);
 
    getch();
    return 0;
}
