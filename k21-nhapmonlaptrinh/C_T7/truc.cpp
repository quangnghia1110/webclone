#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
	int n,i,max;
	int *a;
	a=(int *)malloc(n*sizeof(int));
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&*(a+i));
	max=*a;
	for(i=1;i<n;i++)
	if(max<*(a+i))
	max=*(a+i);
	printf("%d",max);
	return 0;
}