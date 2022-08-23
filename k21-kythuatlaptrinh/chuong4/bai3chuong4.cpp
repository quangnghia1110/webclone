#include<iostream>

using namespace std;

long giaithua(int n,long s){
    if (n==1) return s;
    else return giaithua(n-1,s*n);
}

int main() {
    int n;
    cin>>n;
    long s;
    s=1;
    cout<<giaithua(n,s);
}