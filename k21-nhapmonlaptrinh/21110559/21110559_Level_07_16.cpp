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
    int demHT = 0;
    for(int i = 0; i < n; i++)
    {
        if(KiemTraSoHoanThien(a[i]) == true )
        {
            demHT++;
        }
    }
    return demHT;
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
int demnguyento(int a[], int n)
{
    int demNT = 0;
    for(int i = 0; i < n; i++)
    {
        if(KiemTraNguyenTo(a[i]) == true )
        {
            demNT++;
        }
    }
    return demNT;
}
int main()
{
    int n,a[100];
    printf("nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    int demNT=demnguyento(a,n);
    int demHT=sohoanthien(a,n);
   	if(demHT==demNT)
    printf("\nSO LUONG SO NGUYEN TO VA HOAN THIEN LA BANG NHAU");
    else
    printf("\nSO LUONG SO NGUYEN RO VA HOAN THIEN KHONG BANG NHAU");
}
