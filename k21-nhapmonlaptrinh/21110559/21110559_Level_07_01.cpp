
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
    else if (n>2)
    {
        if (n % 2 == 0)
        {
            return false;
        }
        for (int i=3;i<=sqrt((float)n);i+=2)
        {
        	if(n%i==0)
        	{
        		return false;
			}
		}
    }
    return true;
}
int timsonguyentodau(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(KiemTraNguyenTo(a[i])==true)
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
    int nguyentodau=timsonguyentodau(a,n);
    printf("so nguyen to dau la: %d",nguyentodau);
    return 0;
}
