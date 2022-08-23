#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int dequyGiaiThua(int n)
{
	if(n==0)
		return 1;
	else
		return (n*dequyGiaiThua(n-1));
}
int main()
{
	int n;
	cin>>n;
	int ans=dequyGiaiThua(n);
	cout<<ans;
}
