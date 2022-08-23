#include<stdio.h>

int dichTrai(int n, int k);
int getbit(int n, int i);
void onbit(int &n, int i);

void main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int kq=dichTrai(n,k);
	printf("%d",kq);
}
int dichTrai(int n, int k)
{
	for (int i=0;i<k;i++)
	{
		int x = getbit(n,31);
		n = n << 1;
		if (x==1)
			onbit(n,0);
	}
	return n;
}
int getbit(int n, int i)
{
	return  (n >> i) && 0x1;
}
void onbit(int &n, int i)
{
	n = n | (0x1<<i);
}