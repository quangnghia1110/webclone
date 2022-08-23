#include<stdio.h>
int tong( int n)
{
	int sum=0;
	while(n>0)
	{
		sum+=(n%10);
		n/=10;
	}
	return sum;
}
int daonguoc(int n)
{
	int res=0;
	while(n>0)
	{
		res=res*10+n%10;
		n/=10;
	}
	return res;
}
int doixung(int n)
{
	if(n==daonguoc(n))
		return 1;
	else
		return 0;
	
}
int main()
{
	 int n;
	 scanf("%d",&n);
	 printf("%d",tong(n));
	 printf("\n");
	 printf("%d",daonguoc(n));
	 printf("\n");
	 printf("%d",doixung(n));
	 printf("\n");
}