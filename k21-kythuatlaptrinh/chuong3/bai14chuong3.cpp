#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[100];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int x;
	cin>>x;
	int s=A[0];
	int xi=1;
	for(int i=1;i<=n;i++)
	{
		xi=xi*x;
		s=s+A[i]*xi;
	}
	cout<<s;
	
}
