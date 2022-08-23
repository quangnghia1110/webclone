#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(){
	int n,i,donvi;
	printf("Nhap n: ");scanf("d",&n);
	for(i=0;i<=n;i++)
	{
		while(n>0)
		{
			donvi=n%10;
			n=n/10;
			if(donvi%2==0)
			{
				printf("toan bo cac so deu la so chan ",donvi);
			}
			else
				printf("khong han");
		}
	}
	return 0;
}
