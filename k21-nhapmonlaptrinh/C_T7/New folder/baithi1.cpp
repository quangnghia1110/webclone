#include<iostream>
using namespace std;

int main()
{
	int a[3][3]={{1,0,2},{2,1,0},{0,2,1}};
	int s=0;
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	{
		if(i<j)
		break;
		s=s+a[i][j];
	}
	cout <<s;
	return 0;
}