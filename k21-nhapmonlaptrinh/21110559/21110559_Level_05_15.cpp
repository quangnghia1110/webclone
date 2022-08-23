#include <stdio.h>
#include <math.h>
int main() {
    int i, n;
    float s=0, x;
    printf("Nhap n: ");scanf("%d", &n);
    printf("Nhap x de tinh: ");scanf("%f", &x);
        for(i=1; i<=n; i++) {
            s=sqrt(x+s);
        }
    printf("\nS = %f", s);
}

