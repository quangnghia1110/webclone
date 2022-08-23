#include<iostream>
using namespace std;
void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<endl;
}
void xuat(int a[], int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i];
	cout<<endl;
}
int timso0dau(int a[],int n)
{
	int i=n-1;
	while(i>=0&&a[i]==1)
		i--;
	return i;
}
void sinhnhiphan(int n)
{
	int a[100]={0};
	xuat(a,n);
	int k=n-1;
	do{
		xuat(a,n);
		a[k]=1;
		for(int i=k+1;i<n;i++)
			a[i]=0;
		k=timso0dau(a,n);
	}while(k!=-1);
}
int main()
{
	int n;
	cin>>n;
	sinhnhiphan(n);
}