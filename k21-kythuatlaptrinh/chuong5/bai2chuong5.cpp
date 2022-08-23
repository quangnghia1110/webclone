#include<iostream>
#include<math.h>
using namespace std;
int dem(int n)
{
	int dem=0;
	while(n>0)
	{
		n=n/10;
		dem++;
	}
	return dem;
}
bool tong(int n)
{
	int so=dem(n);
	int temp=n;
	int sum=0;
	int last;
	while(temp>0)
	{
		last=temp%10;O
		temp=temp/10;
		sum=sum+pow(last,so);
	}
	if(sum==n)
		return true;
	return false;
}
int main()
{
	int n;
	cin>>n;
	if(tong(n)==true)
		cout<<n;
	else
		cout<<"0";
}