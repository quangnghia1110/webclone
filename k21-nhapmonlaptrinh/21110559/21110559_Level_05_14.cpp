#include<stdio.h>
#include<math.h>
int C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}
int main(){
    int n, k;
   	printf("\nNhap vao mot so k: ");scanf("%lf", &k);
    printf("\nNhap vao mot so n: ");scanf("%lf", &n);
    printf("\nKet qua bai toan la %d", C(k,n));
    return 0;
}
