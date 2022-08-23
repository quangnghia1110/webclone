#include<stdio.h>
void sapxep(int b[], int n)
{
	for( int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(b[i]>b[j])
			{
				int tam=b[i];
				b[i]=b[j];
				b[j]=tam;
			}
		}
	}
}
void duongcheochinh( int a[][100], int m, int n)
{
	int b[100];
	for(int i=0;i<m,i<n;i++)
		b[i]=a[i][i];
	if(m<n)
		sapxep(b,m);
	else
		sapxep(b,n);
	for(int i=0;i<m,i<n;i++)
		a[i][i]=b[i];
}
int main()
{
	int m,n;
	int a[100][100];
	scanf("%d %d",&m, &n);
	for( int i=0; i<m;i++)
		for( int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	duongcheochinh(a,m,n);
	for( int i=0; i<m;i++)
		for( int j=0;j<n;j++)
			printf("%d ", a[i][j]);
		printf("\n");
	
}