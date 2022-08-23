#include<stdio.h>
int tongcot(int a[][100], int m, int n, int cot)
{
	int sum=0;
	for( int i=0;i<m;i++)
		sum+=a[i][cot];
	return sum;
}
int tongdong(int a[][100], int m, int n, int dong)
{
	int sum=0;
	for( int i=0;i<m;i++)
		sum+=a[dong][i];
	return sum;
}
int tongcheochinh(int a[][100], int m, int n)
{
	int sum=0;
	for( int i=0;i<n,i<m;i++)
		sum+=a[i][i];
	return sum;
}
int tongcheophu(int a[][100], int m, int n)
{
	int sum=0;
	for( int i=0;i<m,n-i-1>=0;i++)
		sum+=a[i][n-i-1];
	return sum;
}
int main()
{
	int n,m,a[100][100],cot,dong;
	scanf("%d %d", &m,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	scanf("%d",&cot);
	scanf("%d",&dong);
	printf("%d\n",tongcot(a,m,n,cot));
	printf("%d\n",tongdong(a,m,n,dong));
	printf("%d\n",tongcheochinh(a,m,n));
	printf("%d\n",tongcheophu(a,m,n));
	
	
	
}