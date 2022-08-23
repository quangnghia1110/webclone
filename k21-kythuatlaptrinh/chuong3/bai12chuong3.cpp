#include<iostream>
#include<string.h>
using namespace std;
int  tong (int n)
{
	int s=0,p=0;
	for(int i=1;i<=n;i++)
	{
		p=p+i;
		s=s+p;
	}
	return s;
}
int main()
{
	int n;
	cin>>n;
	int kq=tong(n);
	cout<<kq;
}