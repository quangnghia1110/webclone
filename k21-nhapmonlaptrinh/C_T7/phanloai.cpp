#include <stdio.h>
int main()
{
int i,a[3][2],j,max,tam;
for(i=0;i<3;i++)
for(j=0;j<2;j++)
do{printf("Moi ban nhap gia tri cho phan tu a[%d]: ",i);
scanf("%d",&a[i][j]);}while(a[i][j]<0||a[i][j]>10);
int dau=0;
for(i=0;i<3;i++)
{tam=0;
for(j=0;j<2;j++)tam=tam+a[i][j];
if(tam>=10)dau++;}
printf("Ty le dau va rot cua sv la: dau: %f; rot: %f",(float)dau*100/3,(float)(3-dau)*100/3);
}
