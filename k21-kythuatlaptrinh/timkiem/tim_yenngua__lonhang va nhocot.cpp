#include<iostream>
 
using namespace std;
 
int check(int a[105][105], int m, int n, int row, int col, int value){
	for (int i=0;i<n;i++)
		if (a[row][i]>value) return 0;
	for (int i=0;i<m;i++)
		if (a[i][col]<value) return 0;
	return 1;
}
 
int main(){
	int m, n;
	int Count =0;
	int X[10005];
	int Y[10005];
	int a[105][105];
 
	cin>>m>>n;
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
		 cin>>a[i][j];
 
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++){
			int num = a[i][j];
			if (check(a, m, n, i, j, num)==1){
				X[Count]=i;
				Y[Count]=j;
				Count+=1;
			}
		}
 
	cout<<Count<<endl;
	for (int i=0;i<Count;i++) cout<<X[i]+1<<' '<<Y[i]+1<<endl;
}