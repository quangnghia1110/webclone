#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int dequyUCLN(int a,int b)
{
	if(b==0)
		return a;
	return dequyUCLN(b,a%b);
}
int dequyBCNN(int a, int b)
{
	return(a*b)/dequyUCLN(a,b);
}
int main()
{
	int a,b;
	cin>>a>>b;
	int ans=dequyUCLN(a,b);
	cout<<ans<<endl;
	int answ=dequyBCNN(a,b);
	cout<<answ;
}
