#include <stdio.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
} 
int KiemTra(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
			return a[i];}
	return 1;
}
int main(){
    int a[100],n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    printf("%d",KiemTra(a,n));
}
