#include<iostream>
using namespace std;
int gt(int n);
int main()
{
	int n,k;
	cin>>n>>k;
	cout<<gt(n)/(gt(k)*gt(n-k));
	return 0;
}
int gt(int n)
{
	if(n==0)
		return 1;
	return n*gt(n-1);
}
