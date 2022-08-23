#include <stdio.h>
#include <math.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
}

bool KiemTraNguyenTo(int n)
{
    if (n < 2)
    {
        return false;
    }
    else if (n > 2)
    {
        if (n % 2 == 0) 
        {
            return false;
        }
        for (int i = 3; i <= sqrt((float)n); i += 2) 
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}
float tbc(int a[], int n)
{
    int dem = 0;
    int tong = 0,tb;
    for(int i = 0; i < n; i++)
    {
        if(KiemTraNguyenTo(a[i]))
        {
            dem++;
            tong=tong+a[i];
        }
    }
    if(dem==0)
    	return 0;
    else
    {
    	tb=tong/dem;
    	return tb;
	}
}
int main()
{
    int n,a[100];
    printf("nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    printf("\ntrung binh cong so nguyen to la: %.2f",tbc(a,n));
    return 0;
}
