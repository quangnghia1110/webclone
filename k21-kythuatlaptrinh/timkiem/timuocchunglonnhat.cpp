#include<stdio.h>
int gcd( int a, int b)
{
	if(a<0)
		a*=-1;
	if(b<0)
		b*=-1;
	if(a==0)
		return b;
	if(b==0)
		return a;
	while(a!=b)
	{
		if(a>b)
			a-=b;
		else
			b-=a;
	}
	return a;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",gcd(a,b));
}