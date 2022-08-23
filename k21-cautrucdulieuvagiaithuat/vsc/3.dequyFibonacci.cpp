#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int dequyFibonacci(int n)
{
	if(n<0)
		return -1;
	else if(n==0||n==1)
		return n;
	else
		return dequyFibonacci(n-1)+dequyFibonacci(n-2);
}
int main()
{
	int n;
	cin>>n;
	int ans=dequyFibonacci(n);
	cout<<ans;
}
