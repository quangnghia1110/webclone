#include<stdio.h>
#include<math.h>
#include<string>
void tangdan(int a[][100],int m,int n)
{
	int size=m*n;
	for(int i=0;i<size;i++)
		for(int j=i+1;j<size;j++)
			if(a[i/n][i%n]>a[j/n][j%n])
			{
				int t=a[i/n][i%n];
				a[i/n][i%n]=a[j/n][j%n];
				a[j/n][j%n]=t;
			}
}
int main()
{
	int m,n;
	int a[100][100];
	scanf("%d %d",&m,&n);
	for( int i=0; i<m;i++)
		for( int j=0; j<n;j++)
			scanf("%d",&a[i][j]);
	tangdan(a,m,n);
	for( int i=0; i<m;i++)
	{
		for( int j=0; j<n;j++)
			printf("%d",a[i][j]);
		printf("\n");
	}
}