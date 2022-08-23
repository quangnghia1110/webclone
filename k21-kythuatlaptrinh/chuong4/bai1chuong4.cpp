#include<iostream>

using namespace std;

void nhapmang(float a[],int n){
    for (int i=1;i<=n;i++){
        cout<<"nhap phan tu thu "<<i<<":";
        cin>>a[i];
    }
}

float timmin(float a[],int n){
    if (n==1) return a[1];
    if (n==0) return -1;
    
    else {
        if (a[n-1]<timmin(a,n-1)) return a[n-1];
        else return timmin(a,n-1);
    }
}

int main(){
    float a[100];
    int n;
    cout<<"nhap n:";cin>>n;
    nhapmang(a,n);
    cout<<"gia tri nho nhat cua mang la:"<<timmin(a,n);
    
}