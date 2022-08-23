#include <stdio.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
} 
int KiemTra(int n)
{
	int donvi;
	while (n >= 10) {
    	donvi=n%10;
        n =n/ 10;
    }
    if (n % 2 != 0)
		{
			return 1;
		}	
	return -1;
}
int KiemTraSoLe(int a[],int n)
{
	for (int i=0;i<n;i++)
	{
		if(KiemTra(a[i])==1)
		{
			return 1;
		}
	}
	return -1;
}
int main(){
    int a[100],n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    if( KiemTraSoLe(a,n)==1)
		printf("%d la so nguyen co chu so dau tien la so le trong mang");
	else
		printf("0");
}
