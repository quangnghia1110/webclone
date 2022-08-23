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
int sohoanthien(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(KiemTraSoHoanThien(a[i])==true)
		{
			return a[i];
		}
	}
	return -1;
}
int main(){
    int a[100],n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    int sohoanthiendau=sohoanthien(a,n);
    printf("so hoan thien dau la: %d",sohoanthiendau);
    return 0;
}
