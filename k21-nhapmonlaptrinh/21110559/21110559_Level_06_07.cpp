#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n;
    long long  f0 = 0, f1 = 1, fn;
    printf("nhap n: "); scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
        printf("fibo(%d) = %lld\n", i, fn);

    }
    return 0;
}
