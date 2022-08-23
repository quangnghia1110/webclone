#include <stdio.h>
#include <math.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
} 
int SoHoanThien(int n)
{
   int tong=0;
   for (int i=1 ; i<n; i++)
       if(n%i==0)
          tong = tong + i;
   if (tong == n)
      return 1;
   return 0;
}
int SoHoanThienNhonhat(int a[],int n)
{
   int dem=0;
   int min;
   for(int i=0; i<n; i++)
   {
       if(SoHoanThien(a[i])==1)
       {
           dem ++;
           min = a[i];
           break;
       }
   }
   if (dem ==0)
       return 0;
   for (int i=0; i<n; i++)
   {
       if ((SoHoanThien(a[i])==1) && (min>a[i]))
       {
           min = a[i];
       }
   }
   return min;
}
int main(){
    int a[100],n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    int ketqua=SoHoanThienNhonhat(a,n);
    	printf("%d",ketqua);
}
