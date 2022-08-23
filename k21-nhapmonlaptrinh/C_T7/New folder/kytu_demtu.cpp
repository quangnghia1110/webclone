#include<stdio.h>
#include<conio.h>
#include<string.h>
int demsotu(char s[])
{
	int sotu=0;
	int len=strlen(s);
	if(s[0]==NULL)
		return 0;
	if(s[0]!=' ')
		sotu++;
	for(int i=0;i<len;i++)
		if(s[i]!=' '&&s[i-1]==' ')
			sotu++;
	return sotu;
}
int main()
{
	char s[90];
    gets(s);
	int kq=demsotu(s);
	printf("%d",kq);
	
}
