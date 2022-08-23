#include <stdio.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
} 
int SoChan(int a[], int n)
{
   for (int i=n-1; i>=0; i--)
   {
      if (a[i]>0)
         return a[i];}
   return -1;
}
int main(){
    int a[100],n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    printf("so duong cuoi cung la %d",SoChan(a,n));
}
