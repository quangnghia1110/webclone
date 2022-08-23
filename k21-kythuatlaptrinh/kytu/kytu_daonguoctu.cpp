#include<stdio.h>
#include<string.h>
void daonguoctu(char str[])
{
	int len=strlen(str);
	int i=0;
	strrev(str);
	while(i<len)
	{
		int oldi=i;
		while(i<len&&str[i]!=' ')
			i++;
		for(int j=0;j<=int((i-oldi)/2)-1;j++)
		{
			int tam=str[j+oldi];
			str[j+oldi]=str[i-j-1];
			str[i-j-1]=tam;	
		}
		i++;
	}
}
int main()
{
	int n;
	char str[2000];
	gets(str);
	puts(str);
	daonguoctu(str);
	puts(str);
}