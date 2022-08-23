
#include<iostream>
using namespace std;
int a[100],b[100]={0},n,dem;

void xuat()
{
	dem++;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
int lietke(int k)
{
	if(k==n)
		xuat();
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(b[i]==0)
			{
				a[k]=i;
				b[i]=1;
				lietke(k+1);
				b[i]=0;
			}
		}
	}
}

int main()
{
	cin>>n;
	dem=0;
	lietke(0);
	cout<<dem;

	return 0;
}