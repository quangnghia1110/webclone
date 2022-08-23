#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
bool checkNT(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if(n%i==0)
            return false;
    return true;
}
int tong(int n, int a[])
{
	int min=a[0];
	for(int i=0;i<n;i++)
	{
			if(checkNT(a[i])==1)
			{
				if(min>a[i])
					min=a[i];
			}

	}
	return min;
}
int main()
{
	int a[101];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int kq=tong(n,a);
	cout<<kq;
}