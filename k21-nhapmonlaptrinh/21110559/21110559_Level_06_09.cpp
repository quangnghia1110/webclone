#include <stdio.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
} 
int TinhTong(int a[], int n,int x){
	int sum=0;
    for(int i = 0;i < n; ++i)
        if(a[i]>x)
            sum=sum+a[i];
    return sum;
}
int main(){
    int a[100],n,x,sum;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    printf("Nhap x: ");scanf("%d", &x);
    printf("Tong cac phan tu lon hon %d la: ",TinhTong(a,n,x));
}
