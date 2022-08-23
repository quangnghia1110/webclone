#include<stdio.h>
#define SIZE 20
int tinhF(int m);
void main()
{
	int m;
	scanf("%d",&m);
	int kq = tinhF(m);
	printf("%d",kq);
}
int tinhF(int m)
{
	int F[SIZE];
	F[0]=2;
	F[1]=4;
	F[2]=6;
	int i=0;
	while (F[i]<=m)
	{
		i++;
		F[i+2]=2*F[i-1]+4*F[i]+6*F[i+1];
	}
	return i-1;
}