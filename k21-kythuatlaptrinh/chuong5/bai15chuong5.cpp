#include<iostream>
#include<string.h>
using namespace std;
int a[11];
int n=10;
int a[0]=1;
void binary(int n, int pos, int count)
{
	dem = count;
	for (i=0;i<=1;i++)
	{
		a[pos]=i;
		if (a[pos-1]==0 && a[pos]==1)
			dem++;
		if (pos == 10)  
		{	
			if (dem == 2)
				printstr();
		}
		else
		if (dem<3)	
			binary(n, pos+1, count);
		dem = count;
	}
}
int main()
{
	
}