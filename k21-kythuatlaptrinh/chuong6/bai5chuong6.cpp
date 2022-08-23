#include<bits/stdc++.h>
using namespace std;
int A[100][100],B[100][100],C[100][100];
int a,b,c,d;
void nhap(int a[][100],int &m,int &n)
{
	cout<<"--------"<<endl;
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
}
int tich(int i,int j)
{
	int kq=0;
	for(int k=0;k<b;k++)
		kq+=A[i][k]*B[k][j];
	return kq;
}
int main()
{
	nhap(A,a,b);
	nhap(B,c,d);
	if(b==c){
		for(int i=0;i<a;i++)
			for(int j=0;j<d;j++)
				C[i][j]=tich(i,j);
		for(int i=0;i<a;i++){
			for(int j=0;j<d;j++)
				cout<<C[i][j]<<" ";
			cout<<endl;
		}
	}
	else
		cout<<"Ko tinh duoc!";
	return 0;
}
