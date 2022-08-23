#include<iostream>
#include<math.h>
using namespace std;
int chuyendoi(int n)
{
	int oct=0,p=0;
	while(n!=0)
	{
		oct=oct+(n%2)*pow(10,p);
		p++;
		n=n/2;
	}
	return oct;
}
int main()
{
	int n;
	cin>>n;
	int kq=chuyendoi(n);
	cout<<kq;
}