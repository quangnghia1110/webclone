#include<stdio.h>
#include<math.h>
#include<string>
int mincot(int a[][100], int m, int n, int cot)
{
	int min=a[0][cot];
	for( int i=1;i<m;i++)
		if(min>a[i][cot])
			min=a[i][cot];
	return min;
}
int maxdong(int a[][100], int m, int n, int dong)
{
	int max=a[dong][0];
	for( int i=1;i<n;i++)
		if(max<a[dong][i])
			max=a[dong][i];
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
			int num2=mincot(a,m,n,j);
			if(num1==num2&&num1==a[i][j])
				printf("%d ",a[i][j]);   	
 		}
}
