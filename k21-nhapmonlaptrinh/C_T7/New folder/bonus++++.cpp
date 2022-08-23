#include <iostream>
using namespace std;
 
void nhap(int A[][55],int&n,int&k);
int tinhQua(int A[][55],int n,int k);
 
int main()
{
	int A[55][55],n,k;
	nhap(A,n,k);
	int kq=tinhQua(A,n,k);
	cout<<kq;
	return 0;
}
 
 
int tinhQua(int A[][55],int n,int k)
{
	int max=-2000000009;
	for(int i=1;i<=n-k+1;i++)
		for(int j=1;j<=n-k+1;j++)
		{
			int tong=0;
			for(int l=i;l<=i+k-1;l++)
				for(int m=j;m<=j+k-1;m++)
					tong+=A[l][m];
			if(max<tong)
				max=tong;
		}
	return max;
}
 
void nhap(int A[][55],int&n,int&k)
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			cin>>A[i][j];
}