#include <stdio.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
} 
void lietke(int a[], int n, int x, int y)
{
    for (int i=0; i<n; i++)
        if (x<=a[i] && a[i]<=y)
            printf("%d",a[i]);
}
int main(){
    int a[100];
	int x,y;
    int n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    printf("Nhap x: ");scanf("%d",&x);
    printf("Nhap y: ");scanf("%d",&y);
    NhapMang(a, n);
    printf("cac so thuoc mang la: ");
	lietke(a, n, x, y);
}
