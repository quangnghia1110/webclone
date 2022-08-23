
#include<stdio.h>
#include<math.h>
int main()
{
	int m,n;
	int max=-1;
	int min=1e9;
	int a[100][100];
	scanf("%d %d",&m ,&n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	int sum=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			//co the thm if kiem tra o day//
			if(max<a[i][j])
				max=a[i][j];
			if(min>a[i][j])
				min=a[i][j];
			
		}
	printf("%d\n",min);
	printf("%d\n",max);
		
}