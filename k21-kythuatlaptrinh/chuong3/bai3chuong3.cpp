#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n;
	float s=0;
	int p=0;
	cin>>n;
	for( int i=1;i<=n;i++)
	{
		p=p+i;
		s=s+1.0/p;
	}
	cout<<s;
}
