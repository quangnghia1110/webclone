#include <stdio.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
} 
bool KT_TangDan (int a[],int n)
{
    for(int i=0;i<n-1;i++)
       if(a[i]>a[i+1])
           return false;
    return true;
}
int main(){
    int a[100],n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    printf("day la mang so tang dan");
	KT_TangDan(a,n);
}
