#include<iostream>
using namespace std;
int kt_trai_tren(int a[50][50], int i, int j, int k) {
    int sum=0,z,X;
    for (z = i - k+ 1; z <= i; z++)
         for (x = j - k + 1; x <= j; x++)
              sum += a[z][x];
    return sum;
}
int kt_trai_duoi(int a[50][50], int i, int j, int k) {
    int sum = 0, z, x;
    for (z = i - k + 1; z <= i; z++)
         for (x = j; x <= j + k - 1; x++)
              sum += a[z][x];
    return sum;
}
int kt_phai_duoi(int a[50][50], int i, int j, int k) {
        int sum= 0, z, x;
        for(z=i; z<= i + k - 1; z++)
         for (x = j; x <=j + k - 1; x++)
              sum += a[z][x];
    return sum;
}
int kt_phai_tren(int a[50][50], int i, int j, int k) {
    int sum=0,z,x;
    for (z = i; z <= i + k - 1; z++)
         for (x = j - k +1; x <= j; x++)
              sum += a[z][x];
    return sum;
}
int main()
{
    int i,j,n,k;cin>>n>>k;
    int a[50][50];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    int max=0,tt,td,pt,pd;
    for(i=0;i<n;i++)
    {
        tt=0;
        td=0;
        pt=0;
        pd=0;
        for(j=0;j<n;j++)
        {
            if(i-k+1>=0&&j-k+1>=0)
                tt=kt_trai_tren(a,i,j,k);
            if(i-k+1>=0&&j+k-1<=n-1)
                td=kt_trai_duoi(a,i,j,k);
            if(i+k-1<=n-1&&j-k+1>=0)
                pt=kt_phai_tren(a,i,j,k);
            if(i+k-1<=n-1&&j+k-1<=n-1)
                pd=kt_phai_duoi(a,i,j,k);
            if(max<tt) max=tt;
            if(max<td) max=td;
            if(max<pt) max=pt;
            if(max<pd) max=pd;

            
        }
    }
    count<<max;
}