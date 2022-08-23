#include<stdio.h>
#include<math.h>
#include<conio.h>
using namespace std;
void nhap(int a[][50],int &n,int &m)
{
		scanf("%d",&n);
 		scanf("%d",&m);
		for(int i=0;i<n;i++)
 		for(int j=0;j<m;j++)
 		{
 			scanf("%d",&a[i][j]);
 		}
}
 void XoaDong(int a[][50],int &n,int m)
{
 	int dong; 
    for(int i=dong;i<n-1;i++)
 		for(int j=0;j<m;j++)
 		{
 			a[i][j]=a[i-1][j];
 		}
		n--;  
}
int PhanTuLonNhat(int a[][50], int m, int n)
{
   int max = a[0][0];
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
         if(a[i][j]>max)
            max = a[i][j];
   return max;
}

int main()
{
 	int a[50][50],n,m,x,dong;
 	nhap(a,n,m);
 	scanf("%d",&dong);
 	XoaDong(a,n,m);
	printf("%d",PhanTuLonNhat(a,n,m));
 	return 0; 

}