#include <stdio.h>
void NhapMang(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("Nhap phan tu a[%d] = ", i); scanf("%d", &a[i]);
    }
}
int KiemTra(int a[], int n, int x)
{
    for (int i = n; i > 0; i--)
    {
        if (a[i] == x)
            return i;
    }
    return -1;
}
int main() {
    int a[100], n, x, dem;
    printf("Nhap so luong phan tu: "); scanf("%d", &n);
    NhapMang(a, n);
    printf("Nhap x: "); scanf("%d", &x);
    printf("%d", KiemTra(a, n, x));
}
