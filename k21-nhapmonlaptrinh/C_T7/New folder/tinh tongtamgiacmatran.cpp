#include<stdio.h>
#include<math.h>
#include<string>
int dang1(int a[][100], int n)
{
	int sum=0;
	for( int i=0;i<n;i++)
		for( int j=0;j<=i;j++)
			sum+=a[i][j];
	return sum;
}
int dang2(int a[][100], int n)
{
	int sum=0;
	for( int i=0;i<n;i++)
		for( int j=0;j<n-i;j++)
			sum+=a[i][j];
	return sum;
}
int dang3(int a[][100], int n)
{
	int sum=0;
	for( int i=0;i<n;i++)
		for( int j=i;j<n;j++)
			sum+=a[i][j];
	return sum;
}
int dang4(int a[][100], int n)
{
	int sum=0;
	for( int i=0;i<n;i++)
		for( int j=n-1-i;j<n;j++)
			sum+=a[i][j];
	return sum;
}
int dang5(int a[][100], int n)
{
	int sum=0;
	for( int i=0;i<n;i++)
		if(i<(n+1)/2)
		{
			for(int j=0;j<=i;j++)
			{
					sum+=a[i][j];
			}
		}
		else
		{
			for(int j=0;j<=n-1-i;j++)
			{
					sum+=a[i][j];
			}
		}
		
	return sum;
}
int dang6(int a[][100], int n)
{
	int sum=0;
	for( int i=0;i<n;i++)
		if(i<(n+1)/2)
		{
			for(int j=0;j<=i;j++)
			{
					sum+=a[j][i];
			}
		}
		else
		{
			for(int j=0;j<=n-1-i;j++)
			{
					sum+=a[j][i];
			}
		}
		
	return sum;
}
int dang7(int a[][100], int n)
{
	int sum=0;
	for( int i=0;i<n;i++)
		if(i<(n+1)/2)
		{
			for(int j=0;j<=i;j++)
			{
					sum+=a[i][n-1-j];
			}
		}
		else
		{
			for(int j=0;j<=n-1-i;j++)
			{
					sum+=a[i][n-1-j];
			}
		}
		
	return sum;
}
int dang8(int a[][100], int n)
{
	int sum=0;
	for( int i=0;i<n;i++)
		if(i<(n+1)/2)
		{
			for(int j=0;j<=i;j++)
			{
					sum+=a[n-1-j][i];
			}
		}
		else
		{
			for(int j=0;j<=n-1-i;j++)
			{
					sum+=a[n-1-j][i];
			}
		}
		
	return sum;
}

int main()
{
	int a[100][100];
    int m,n;
    scanf("%d %d", &m,&n);
    for( int i=0;i<m;i++)
    	for( int j=0;j<n;j++)
    		scanf("%d",&a[i][j]);
  	int kq1=dang1(a,n);
    printf("%d",kq1);
    printf("\n");
    int kq2=dang2(a,n);
    printf("%d",kq2);
    printf("\n");
    int kq3=dang3(a,n);
    printf("%d",kq3);
    printf("\n");
    int kq4=dang4(a,n);
    printf("%d",kq4);
    printf("\n");
    int kq5=dang5(a,n);
    printf("%d",kq5);
    printf("\n");
    int kq6=dang6(a,n);
    printf("%d",kq6);
    printf("\n");
    int kq7=dang7(a,n);
    printf("%d",kq7);
    printf("\n");
    int kq8=dang8(a,n);
    printf("%d",kq8);
    printf("\n");
    
	
}