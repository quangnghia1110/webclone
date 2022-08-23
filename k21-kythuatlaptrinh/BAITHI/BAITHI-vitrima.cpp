#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int X[8]={-2,-2,-1,1,2,2,1,-1};
int Y[8]={1,-1,-2,-2,-1,1,2,2};
int A[8][8];
int duongdi(int A[][8],int x1,int x2,int y1,int y2)
{
	for(int k=0;k<8;k++)
	{
		if(x1+X[k]>=0&&x1+X[k]<8&&y1+Y[k]>=0&&y1+Y[k]<8)
		{
			if(x2==x1+X[k]&&y2==y1+Y[k])
			{
				cout<<k+1;
				exit(0);
			}
		}
	}
	cout<<"0";
}
int main()
{
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	duongdi(A,x1,x2,y1,y2);
}
