#include<iostream>
using namespace std;
void nhap(int a[][105],int m,int n)
{
	cin>>m>>n;
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
		 cin>>a[i][j];
}
int kiemtra(int a[][105], int m, int n, int row, int col, int value){
	for (int i=0;i<n;i++)
		if (a[row][i]>value)
			return 0;
	for (int i=0;i<m;i++)
		if (a[i][col]<value) 
			return 0;
	return 1;
}
void giatri(int a[][105],int m, int n,int X[],int Y[])
{
	int dem=0;
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++){
			int num = a[i][j];
			if (kiemtra(a, m, n, i, j, num)==1){
				X[dem]=i;
				Y[dem]=j;
				dem+=1;
			}
		}
 } 
int main(){
	int m, n, dem ,X[10005],Y[10005], a[105][105];
 	nhap(a,m,n);
 	giatri(a,m,n,X,Y);
	for (int i=0;i<dem;i++) 
		cout<<X[i]+1<<' '<<Y[i]+1<<endl;
}