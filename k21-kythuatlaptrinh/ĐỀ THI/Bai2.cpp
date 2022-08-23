#include<stdio.h>
#include<conio.h>

#define SIZE 25

void nhap(long A[SIZE], int &n, int &k);
void xuat(long s);
long tinhTong(long A[SIZE], int n, int k);
void sinh(int B[SIZE], int n);

void main()
{
	int n,k;
	long A[SIZE];
	nhap(A,n,k);
	long s=tinhTong(A,n,k);
	xuat(s);
}

void sinh(int B[SIZE], int n)
{
	int i=n-1;
	while (i>=0 && B[i]==0) 
		i--;
	if (i>=0)
	{
		B[i]=0;
		for (int j=i+1;j<n;j++)
			B[j]=1;
	}
}
long tinhTong(long A[SIZE], int n, int k)
{
	int B[SIZE];
	for (int i=0;i<n;i++)
		B[i]=1;
	long max=0;
	do
	{
		long s=0;
		for (int i=0;i<n;i++)
			s+=B[i]*A[i];
		if (s%k==0 && s>max)
			max=s;
		else
			if (s==0)
				return max;
		sinh(B,n);
	}while(1);
}

void nhap(long A[SIZE], int &n, int &k)
{
	scanf("%d%d",&n,&k);
	for (int i=0;i<n;i++)
		scanf("%ld",&A[i]);
}

void xuat(long s)
{
	printf("%ld",s);
}