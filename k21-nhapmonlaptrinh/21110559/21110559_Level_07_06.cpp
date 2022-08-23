#include <stdio.h>
#include <math.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
}

bool KiemTraSoHoanThien(int n)
{
	int sum=0;
    for(int i=1;i<=n/2;i++)
    { 	
        if(n%i==0)
        {
        	sum=sum+i;
		}
	}
	 if(sum==n) 
	 	return true;
	else
		return false;
}
int sohoanthien(int a[], int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(KiemTraSoHoanThien(a[i]) == true )
        {
            dem++;
        }
    }
    return dem;
}
int main()
{
    int n,a[100];
    printf("nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    int dem = sohoanthien(a, n);
    printf("\nso luong hoan thien trong mang: %d", dem);
}
