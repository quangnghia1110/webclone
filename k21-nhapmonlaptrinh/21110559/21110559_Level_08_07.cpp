#include <stdio.h>
#include <math.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%f", &a[i]);
    }
} 
float SoAmLonNhat(int a[],int n)
{
   int dem=0;
   int max;
   for(int i=0; i<n; i++)
   {
       if(a[i]<0)
       {
          dem ++;
          max = a[i];
          break;
       }
   }
   if (dem ==0)
       return -1;
   for (int i=i+1; i<n; i++)
   {
       if ((a[i]<0) && (max<a[i]))
       {
           max = a[i];
       }
   }
   return max;
}
int main(){
    int a[100],n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    int ketqua=SoAmLonNhat(a,n);
     if(SoAmLonNhat==0)
    	printf("-1");
    else
    	printf("%.f",ketqua);
}
