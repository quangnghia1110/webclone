#include<iostream>
using namespace std;
void tinhf(int n)
{
	int F[100];
	F[0]=2;
	F[1]=4;
	F[2]=6;
	int i=0;
	while(F[i]<=n)
	{
		i++;
		F[i]=2F[n-3]+4F[n-2]+6F[n-1];
	}
	return i;
}
int main()
{
	int n;
	cin>>n;
	int kq=tinhf(n);
	cout<<kq;
}