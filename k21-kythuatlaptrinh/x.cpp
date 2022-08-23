#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int FindWord(int a[],int n,int x)
{
    a[n]=x;
    int i=0;
    while(a[i]!=x)
        i++;
    if(i<n)
        return i;
    return -1;
}
int main()
{
    int n,a[100],x;
    cin>>n>>x;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans=FindWord(a,n,x);
    cout<<ans;
}