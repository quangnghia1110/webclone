#include <stdio.h>
#include <math.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
}

bool KiemTraSoChinhPhuong(int n)
{
	for(int i=1;i*i<=n;i++)
	{
		if(i*i==n)
			return true;
	}
	return false;
}
int sochinhphuong (int a[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(KiemTraSoChinhPhuong(a[i]) == true )
        {
            sum=sum+a[i];
        }
    }
    return sum;
}
int main()
{
    int n,a[1000];
    printf("nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    int sum = sochinhphuong(a, n);
    printf("\ntong cac so chinh phuong trong mang la: %d", sum);
}
