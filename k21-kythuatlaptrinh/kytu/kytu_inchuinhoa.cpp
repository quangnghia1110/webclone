#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	gets(s);
	int i,len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			printf("%c\n",s[i]);
		}
	}
}