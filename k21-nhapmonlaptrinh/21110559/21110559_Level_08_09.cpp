#include <stdio.h>
#include <math.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
} 
bool Kiemtra(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if(n%i==0)
            return false;
    return true;
}
int sontmax(int a[], int n) {
	int max=0;
    for (int i = 0; i < n; i++) {
        if (a[i] > max && Kiemtra(a[i]) )
            max = a[i];
    }
    if( max == 0 )
        return 0;
    else
        return max;
}
int main(){
    int a[100],n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    int ketqua=sontmax(a,n);
    if(sontmax==0)
    	printf("-1");
    else
    	printf("%d",ketqua);
}
