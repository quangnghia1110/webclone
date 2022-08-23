#include <stdio.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
} 
int KiemTraToanChan(int a[], int n)
{
	for( int i=0;i<n;i++)
		if(a[i]%2!=0)
		{
			return -1;
		}
	return 1;
}
int main(){
    int a[100],n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    printf("Mang cac so nguyen co toan so chan khong??\n");
    if( KiemTraToanChan(a,n)==-1)
		printf("0");
	else
		printf("1");
}
