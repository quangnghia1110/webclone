#include<iostream>
#include<string.h>
using namespace std;
void nhap(int A[],int &n)
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
}
void xuat(int A[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
}
void ghepmang(int A[],int nA, int B[],int nB,int C[],int &nC)
{
	int iA=0;
	int iB=0;
	nC=0;
	while(iA<nA&&iB<nB)
	{
		C[nC++]=A[iA++];//ky thuat bo phan tu
		C[nC++]=B[iB++];
	}
	while(iA<nA)
	{
		C[nC++]=A[iA++];
	}
	while(iB<nB)
	{
		C[nC++]=B[iB++];
	}
}
int main()
{
	int A[100],B[100],C[100],nA,nB,nC;
	nhap(A,nA);
	nhap(B,nB);
	ghepmang(A,nA,B,nB,C,nC);
	xuat(C,nC);
}