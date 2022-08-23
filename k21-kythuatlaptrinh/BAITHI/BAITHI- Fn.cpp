#include<iostream>
using namespace std;
int tinhf(int n)
{
	int F[100];
	F[0]=2;
	F[1]=4;
	F[2]=6;
	int i=0;
	while(F[i]<=n)
	{
		i++;
		F[i+2]=2*F[i-1]+4*F[i]+6*F[i+1];

	}
	return i-1;
}
int main()
{
	int n;
	cin>>n;
	int kq=tinhf(n);
	cout<<kq;
}