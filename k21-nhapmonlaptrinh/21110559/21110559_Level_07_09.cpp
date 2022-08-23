#include <stdio.h>
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);scanf("%d", &a[i]);
    }
} 
int timvitrinhonhat(int a[], int n)
{
    int min = a[0];
    int vitri;
    for (int i = 1; i < n; i++)
        if (min > a[i])
        {
		    min = a[i];
            vitri = i;
    	}
    return vitri;
}
int main(){
    int a[100],n;
    printf("Nhap so luong phan tu: ");scanf("%d",&n);
    NhapMang(a, n);
    printf("so lon nhat trong mang la %d",timvitrinhonhat(a,n));
}
