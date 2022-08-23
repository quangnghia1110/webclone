#include<bits/stdc++.h>
using namespace std;
void check(int a[100][100],int i,int j,int m,int n,int &Khonghople)
{
	int bom=0;
	int x[8]={-1,-1,0,1,1,1,0,-1};
	int y[8]={0,-1,-1,-1,0,1,1,1};
	for(int t=0;t<8;t++)
			if(a[i+x[t]][j+y[t]]==9)
				bom++;
	if(bom!=a[i][j]&&a[i][j]!=9)
		Khonghople++;
}
int main()
{
	int a[100][100],m,n,Khonghople=0;
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			check(a,i,j,m,n,Khonghople);
	cout<<Khonghople;
}
/*HỢP LỆ ==> 0		KHÔNG HỢP LỆ ==>4
4 5					4 5
1 2 9 4 9 			1 3 9 4 9
2 9 4 9 9 			2 9 2 9 9
9 4 6 9 4   		9 6 6 9 4
2 9 9 9 2			2 9 9 9 1	*/