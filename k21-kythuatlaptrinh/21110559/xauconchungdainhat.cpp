#include<iostream>
#include<math.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	int n=a.size(),m=b.size(),L[n+1][m+1];
	memset(L,0,sizeof(L));
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(a[i-1]==b[j-1])
			{
				L[i][j]=L[i-1][j-1]+1;
			}
			else
			{
				L[i][j]=max(L[i-1][j],L[i][j-1]);
			}
		}
	}
	cout<<L[n][m];
	
}
