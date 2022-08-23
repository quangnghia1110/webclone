#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[]) 
{
	char s[2000];
	int i,n,j;
	gets(s);
	n=strlen(s);
		for(i=0;i<n;i++)
		{
		if((s[i]==' ')&&(s[i+1]==' '))
		{
			for(j=i;j<n;j++)
			{
				s[j]=s[j+1];
			}
			n--;
			i--;
		}
		}
	for(i=0;i<n;i++)
	{
		printf("%c",s[i]);
	}
	return 0;
}