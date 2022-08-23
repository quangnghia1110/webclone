#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int n=a.size(),L[n+1];
	for (int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]>a[j])
			{
				L[i]=max(L[i],L[j]+1);
			}
		}
	}	
	for(int i=0;i<n;i++)
		cout<<L[i];
	}
