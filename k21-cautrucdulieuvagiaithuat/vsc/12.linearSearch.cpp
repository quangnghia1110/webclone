#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int linearSearch(int a[],int n,int x){
	for(int i=0;i<n;i++)
		if(a[i]==x)
			return i;
	return -1;
}
int main()
{
	int n,x,a[100];
	cin>>n>>x;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int ans=linearSearch(a,n,x);
	cout<<ans;
}
