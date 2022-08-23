#include<stdio.h>
#include<math.h>
int main()
{
	float s = 0, t = 0;
	long p = 1;
	int n;
	printf("nhap n: ");scanf("%d",&n);
	for (int i = 1; i <= n; i++)
	{
		t = t + i;
		p = p * i;
		s = s + (double)t / p;
	}

	printf("tong la %.02f",s);
	return 0;
}
