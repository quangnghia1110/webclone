#include <stdio.h>
 
 
void NhapMaTran(int a[][100], int m, int n)
{
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
      {
         printf("A[%d][%d] = ", i, j);
         scanf("%d", &a[i][j]);
      }
}
 
void XuatMaTran(int a[][100], int m, int n)
{
   for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
         printf("%d\t", a[i][j]);
      printf("\n");
   }
}
int giatri_max_trongtunghang(int a[][100], int m, int n)
{
    int i,j;
    int max=a[0][0];
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            if(a[0][j]>m)
            {
                max=a[0][j];
            }
    return max;
}
int main(){
    int a[100][100];
    int m,n,max;
    printf("nhap so hang n = "); scanf("%d",&n);
    printf("nhap so cot m = "); scanf("%d",&m);
    printf("nhap vao ma tran:\n");
    NhapMaTran(a, m , n);
    XuatMaTran(a, m, n);
    giatri_max_trongtunghang(a,m,n);
    printf("%d",max);
}