#include<stdio.h>
void nhap(int&a, int&b)
{
	scanf("%d %d",&a,&b);
}
void tinh(int a, int b)
{
	if(a==1)
	{
		if(b==1)
			printf("9");
		if(b==2)
			printf("15");
		if(b==4)
			printf("7");
		if(b==8)
			printf("9");
	}
	else if(a==2)
	{
		if(b==1)
			printf("15");
		if(b==2)
			printf("10");
		if(b==4)
			printf("7");
		if(b==8)
			printf("10");
	}
	else if(a==4)
	{
		if(b==1)
			printf("7");
		if(b==2)
			printf("7");
		if(b==4)
			printf("7");
		if(b==8)
			printf("3");
	}
	else if(a==8)
	{
		if(b==1)
			printf("9");
		if(b==2)
			printf("10");
		if(b==4)
			printf("3");
		if(b==8)
			printf("8");
	}
	
}
int main()
{
	int a,b;
	nhap(a,b);
	tinh(a,b);
}