#include<stdio.h>
int dautien(int n)
{
	if(n<0)
		n*=-1;
	while(n>10)
	{
		n/=10;
	}
	return n;
}
int cuoicung(int n)
{
	return n%10;
}
int main()
{
	 int n;
	 scanf("%d",&n);
	 printf("%d",dautien(n));
	 printf("\n");
	 printf("%d",cuoicung(n));
	 printf("\n");
}