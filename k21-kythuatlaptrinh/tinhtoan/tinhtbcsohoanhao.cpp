#include<stdio.h>
void nhap(int a[], int &n){
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
}
int ktrashh(int n){
    int tong=0;
    for(int i=1;i<=n/2;i++)
        if(n%i==0)
            tong=tong+i;
    if(tong==n)
        return 1;
    else
        return 0;
}
 float tinhtb(int a[], int n){
    float tb, tong=0;
    int dem=0;
    for(int i=0;i<n;i++){
        if(ktrashh(a[i])){
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
    printf("%.f",tinhtb(a,n));   
    return 0;
}