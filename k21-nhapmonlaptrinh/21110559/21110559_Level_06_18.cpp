#include <stdio.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
}
void XuatMang(int a[], int n)
{
   for(int i = 0; i<n; i++)
   {
      printf("%4d",a[i]);
   }
} 
void DaoMang(int a[],int n)
{
   for(int i=0;i<n/2;i++)
    {
      int temp=a[i];
         a[i]=a[n-1-i];
         a[n-1-i]=temp; 
   }
}
int main(){
    int a[100],n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    printf("Mang truoc khi dao la: ");
    XuatMang(a, n);
    DaoMang(a, n);
    printf("\nMang sau khi dao la: ");
	XuatMang(a, n);
}
