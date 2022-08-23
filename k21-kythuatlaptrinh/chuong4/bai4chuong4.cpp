#include<iostream>

using namespace std;

void nhapmang(int a[],int n){
    for (int i=1;i<=n;i++){
        cout<<"nhap phan tu thu "<<i<<":";
        cin>>a[i];
    }
}

int trai(int a[], int b,int x){
    if (x==a[b]) {
    return b;
    } 
    if (b==0) return -1;
    else  trai( a,b-1,x);
    
}

int phai(int a[],int n,int x){
    if (x==a[n]) return n;
    if (n==0) return -1;
    else phai(a,n-1,x);
}

int main(){
    int a[100];
    int n;
    cout<<"nhap n:";
    cin>>n;
    nhapmang(a,n);
    int x;
    cout<<"nhap x:";
    cin>>x;
    int b=int(n/2);
    if (x<a[b])
    cout<<trai(a,b,x);
    else cout<<phai(a,n,x);

}