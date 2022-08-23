#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	float s=1;
	for(float i=1;i<=n;i++)
	{
		s=s*(1+1/(i*i));
	}
	cout<<s;
}
