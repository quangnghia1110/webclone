#include<bits/stdc++.h>
using namespace std;
void Pascal(int n);
int main()
{
	int n;
	cin>>n;
	Pascal(n);
	return 0;
}
void Pascal(int n)
{
	int a[100][100]={0};	
	a[0][n+1]=1;
	for(int i=1;i<=n;i++)
		for(int j=1;j<2*(n+1);j++)
			a[i][j]=a[i-1][j-1]+a[i-1][j+1];
	for(int i=0;i<=n;i++){
		for(int j=1;j<2*(n+1);j++){
			if(a[i][j]==0)
				cout<<" ";
			else
				cout<<a[i][j];
		}
		cout<<endl;
	}
}
