#include<iostream>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
	
	int a[4][4];
	int row,col;
	cin>>row>>col;
	for(int i=0;i<row;i++)
		for(int j=0;i<col;j++)
		{
			cin>>a[i][j];
		}
	for(int i=0;i<row;i++)
	{
		for(int j=0;i<col;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}