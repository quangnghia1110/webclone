#include<stdio.h>
int main()
{
	int n,a[10000],max=a[0],vitri=0;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<=n;i++)
	if(a[i]>max)
	{
		max=a[i];
		vitri=i;
	}
	printf("%d %d",max,vitri);
}