#include<stdio.h>
int main()
{
	int a[4]={4,3,2,1};
	int b[4]={0};
	int s,i;
	for(i=0;i<4;i++)
	if(a[i]%2==0)
	b[i]=a[i];
	s=b[1];
}