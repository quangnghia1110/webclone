
#include <stdio.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
} 
bool kiemtra(int n) {
	int donvi;
    while (n >= 10) {
    	donvi=n%10;
        n =n/ 10;
    }
    if (n % 2 == 0)
		 return true;
    return false;
}
 
int sochan(int a[], int n) {
    for (int i = 0; i < n; i++)
	{
        if (kiemtra(a[i])==true)
        {
        	printf("%4d",a[i]);
    	}
    }
    return false;
}
int main(){
    int a[100],n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    printf(" la cac gia tri co chu so dau tien la so chan ",sochan(a,n));
    return false;
}
