#include <stdio.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
} 
int DEM(int a[], int n, int x)
{
	int i,dem=0;
	for( i=0;i<n;i++)
		if(a[i]==x)
			dem++;
	return dem;
}
int main(){
    int a[100],n,x,dem;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    printf("Nhap x: ");scanf("%d", &x);
    printf("co %d phan tu bang x",DEM(a,n,x));
}
