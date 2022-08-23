#include<stdio.h>
#include<math.h>
#include<string>
int maxcot(int a[][100], int m, int n, int cot)
{
	int max=a[0][cot];
	for( int i=1;i<m;i++)
		if(max<a[i][cot])
			max=a[i][cot];
	return max;
}
int maxdong(int a[][100], int m, int n, int dong)
{
	int max=a[dong][0];
	for( int i=1;i<n;i++)
		if(max<a[dong][i])
			max=a[dong][i];
	return max;
}
int maxcheo1(int a[][100], int m, int n, int x, int y)
{
	int hieu=x-y;
	int max=a[x][y];
	for(int i=0;i<m;i++)
	{
		int j=i-hieu;
		if(j>=0&&j<n&&max<a[i][j])
			max=a[i][j];
	}
	return max;
}
int maxcheo2(int a[][100], int m, int n, int x, int y)
{
	int tong=x-y;
	int max=a[x][y];
	for(int i=0;i<m;i++)
	{
		int j=tong-i;
		if(j>=0&&j<n&&max<a[i][j])
			max=a[i][j];
	}
	return max;
}
int main()
{
	int m,n;
	int a[100][100];
	scanf("%d %d",&m,&n);
	for( int i=0;i<m;i++)
    	for( int j=0;j<n;j++)
    		scanf("%d",&a[i][j]);
	for( int i=0;i<m;i++)
    	for( int j=0;j<n;j++)
   		{
			int num1=maxdong(a,m,n,i);
			int num2=maxcot(a,m,n,j);
			int num3=maxcheo1(a,m,n,i,j);
			int num4=maxcheo2(a,m,n,i,j);
			if(num1==num2&&num1==num3&&num1==num4&&num1==a[i][j])
				printf("%d ",a[i][j]);   	
 		}
}
