#include <stdio.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
} 
void lietkechan(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            printf("%4d", a[i]);
        }
    }
}
int main(){
    int a[100],n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    printf("So chan trong mang la: ");
	lietkechan(a,n);
}
