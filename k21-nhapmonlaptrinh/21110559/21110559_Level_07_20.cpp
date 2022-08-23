#include <stdio.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
} 
void XuatMang(int a[], int n)
{
	for(int i=0 ; i<n ; i++ )
		printf("%4d",a[i]);
}
int KiemTraDoiXung(int a[], int n)
{
	for(int i = 0; i < n/2; i++)
	{
		if(a[i] != a[n - i - 1])
		{
			return -1;
		}
	}
	return 1;
}
int main(){
    int a[100],n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    XuatMang(a, n);
    printf("\nMang co doi xung hay khong??\n");
    if( KiemTraDoiXung(a,n)==1)
		printf("Co");
	else
		printf("Khong");
}
