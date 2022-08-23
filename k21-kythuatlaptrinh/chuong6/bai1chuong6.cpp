#include<bits/stdc++.h>
using namespace std;
int n,a[100];
void xuat(int i);
void chuyen_nhi_phan(int k);
void chuyen(int k);
int main()
{
	cin>>n;
	chuyen_nhi_phan(1);
	return 0;
}
void chuyen_nhi_phan(int k)
{
	chuyen(k);
	k++;
	if(k<=n)
		chuyen_nhi_phan(k);
}
void chuyen(int k)
{
	int i=0;
	while(k>0)
	{
		a[i]=k%2;
		k/=2;
		i++;
	}
	xuat(i);
}
void xuat(int i)
{
	for(int j=i-1;j>=0;j--)
		cout<<a[j];
	cout<<endl;
}
