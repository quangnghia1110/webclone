#include<iostream>
using namespace std;
int a[100],b[100],p[100],phuongan[100],n;
int thoigiantoiuu=INT_MAX;
void nhap()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
}
void tinhchiphi()
{
	int ta=0;
	int tb=0;
	for(int i=0;i<n;i++)
		if(p[i]==0)
			ta=ta+a[i];
		else
			tb=tb+b[i];
	int tg=ta;
	if(ta<tb)
		tg=tb;
	if(tg<thoigiantoiuu)
	{
		thoigiantoiuu=tg;
		for(int i=0;i<n;i++)
			phuongan[i]=p[i];
	}
}
void lietkenhiphan(int k)
{
	if(k==n)
		tinhchiphi();
	else
	{
		for(int i=0;i<=1;i++)
		{
			p[k]=i;
			lietkenhiphan(k+1);
		}
	}
}
void xuat()
{
	cout<<"Tong thoi gian thuc hien: "<<thoigiantoiuu<<endl;
	for(int i=0;i<n;i++)
		cout<<phuongan[i]<<" ";
	cout<<endl;
	
}
int main()
{
	nhap();
	lietkenhiphan(0);
	xuat();
	return 0;
}