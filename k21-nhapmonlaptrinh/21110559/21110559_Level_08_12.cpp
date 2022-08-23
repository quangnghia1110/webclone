#include <stdio.h>
#include <math.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
} 
int kiemtra(int a[],int n)
{
	int flag=1;
	for(int i=0;i<n;i++)
	{
		if(((a[i]+a[i+1])%2)==0)
		{	
			flag=0;
			break;
		}
		return 0;
	}
	return flag;
}
int main(){
    int a[100],n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    int flag=kiemtra(a,n);
    	printf("Mang co tinh chan le \n");
	
	return 0;
}
