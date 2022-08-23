#include<iostream>
using namespace std;
void Fibo(int n);
int main()
{
	int n;
	cin>>n;
	Fibo(n);
	return 0;
}
void Fibo(int n)
{
	int a[100];
	a[0]=a[1]=1;
	for(int i=2;i<n;i++)
		a[i]=a[i-1]+a[i-2];
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
