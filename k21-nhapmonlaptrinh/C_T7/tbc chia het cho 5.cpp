#include<stdio.h>
void nhap(int a[], int &n){
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
}
int tinhtb(int a[], int n){
    int tb, tong=0;
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i]%5==0){
            tong=tong+a[i];
            dem++;
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
int main(){
    int a[10000];
    int n;
    nhap(a,n);
    printf("%.d",tinhtb(a,n));   
    return 0;
}