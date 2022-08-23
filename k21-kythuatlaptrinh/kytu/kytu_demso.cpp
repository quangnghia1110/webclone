#include<stdio.h>
#include<conio.h>
#include<string.h>
int demso(char s[])
{
	int dem=0;
	int len=strlen(s);
	for(int i=0; i<len;i++)
	{
		if('0'<=s[i]&&s[i]<='9')
		dem++;
	}	
	return dem;
}
int main()
{
	char s[90];
    gets(s);
	int kq=demso(s);
	printf("%d",kq);
	
}
