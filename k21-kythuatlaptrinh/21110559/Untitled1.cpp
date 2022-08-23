#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
int X[8]={-1,-1,-1,0,0,1,1,1};
int Y[8]={-1,0,1,-1,1,-1,0,1};
int k;
int thoa(int a[][100],int m,int n)
{
    int count=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int sum=0;
            int dem=0;
            for(int k=0;k<8;k++)
            {
                int xx=X[k]+i;
                int yy=Y[k]+j;
                if(xx>=0&&xx<m&&yy>=0&&yy<n)
                {
                    sum=sum+a[xx][yy];
                    dem++;
                }
            }
            float s=(float)sum/(float)dem;
            if(abs(s-a[i][j])<k)
                count++;
        }
    }
    return count;
}
void nhap(int a[][100],int m,int n)
{
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
}
int main(){
    int m,n,a[100][100];
    cin>>m>>n>>k;
    nhap(a,m,n);
    int kq=thoa(a,m,n);
    cout<<kq;
}