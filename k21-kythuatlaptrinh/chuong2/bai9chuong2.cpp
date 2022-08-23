#include<iostream>
using namespace std;
int a[101];
int n;
bool check()
{
    for(int i=0;i<n;i++)
        if(a[i]==1&&a[i+1]==1)
            return false;
    return true;
}
int xuat()
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
            cout<<"A";
        else
            cout<<"B";
    }
    cout<<endl;
}
int duyet(int k)
{
    if(k==n)
    {
	    if(check())
            xuat();
	}
    else
    {
        for(int i=0; i<=1; i++)
        {
            a[k] = i;
            duyet( k+1);
        }
    }
}
int main()
{
    cin>>n;
    duyet(0);
}