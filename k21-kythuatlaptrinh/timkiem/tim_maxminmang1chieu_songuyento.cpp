#include<stdio.h>
int kiemtra(int n)
{
	if(n<2)
		return 0;
	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return 0;
		return 1;
}
int main()
{
	int n,a[10000],max=-1, min=1e9;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<=n;i++)
	{
		if(kiemtra(a[i])&&max<a[i])
			max=a[i];
	}
	for(int i=0;i<=n;i++)
	{
		if(kiemtra(a[i])&&min>a[i])
		min=a[i];
	}
	printf("%d %d",max, min);
}