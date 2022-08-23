#include<stdio.h>
#include<math.h>
int kiemtra(int n)
{
	if(n<0)
		return 0;
	int sum=1;
	for( int i=2;i*i<=n;i++)
		if(n%i==0)
		{
			sum+=1;
			if(i*i!=n)
				sum+=n/i;
		}
	if(sum==n)
		return 1;
	else 
		return 0;
}
int main()
{
	int n,a[10000],dem=0;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<=n;i++)
	if(kiemtra(a[i]))
	dem+=1;
	printf("%d",dem);
}