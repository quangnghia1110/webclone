#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	
	int x;
	cin>>x;
	int n;
	cin>>n;
	double sum=1;
	double p=1;
	for(int i=1;i<=n;i++)
	{
	 	p=p*x/i;
	 	sum=sum+p;
	}
	cout<<sum;
}
