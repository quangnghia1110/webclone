#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,p=1;
	float s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		p=p*i;
		s=s+1.0/p;
				
	}
	cout<<s;
}
