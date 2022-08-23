#include<iostream>
using namespace std;
void Thap(int n , char a, char b, char c ){
    if(n==1){
        cout<<"\t"<<a<<"-------"<<c<<endl;
        return;
    }
    Thap(n-1,a,c,b);
    Thap(1,a,b,c);
    Thap(n-1,b,a,c);
    }
int main(){
    char a='A', b='B', c='C';
    int n;
    cin>>n;
    Thap(n,a,b,c);
}