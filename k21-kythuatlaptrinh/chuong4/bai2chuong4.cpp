#include<iostream>

using namespace std;

void nhapmang(float a[],int n){
    for (int i=1;i<=n;i++){
        cout<<"nhap phan tu thu "<<i<<":";
        cin>>a[i];
    }
}

float tong(float a[], int n,int s){
    if (n==0) return -1;
    if (n==1) return s+a[1];
    else return tong(a,n-1,s+a[n]); 
}

int main(){
    float a[100];
    int n,s;
    cout<<"nhap n:";cin>>n;
    nhapmang(a,n);
    cout<<"tong la:"<<tong(a,n,s);
    
}