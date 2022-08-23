
#include <stdio.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
} 
int SoGanh(int n)
{          
   int t=n;
   int dv,dn=0; 
   while (t!=0)
   {
      dv=t%10;
      dn=dn*10+dv;
      t=t/10;
   }
   if ( n == dn)
      return 1;
   return 0;
}
int soganh(int a[], int n)
{
   for (int i=0; i<n; i++)
    {
	  if (SoGanh(a[i])==1)
        {
		  return a[i];}}
   return -1;
}
int main(){
    int a[100],n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    int ketqua=soganh(a,n);
    printf("%d thoa man tinh chat so ganh ",ketqua);
    return -1;
}
