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
		s=s+p;
				
	}
	cout<<s;
}
