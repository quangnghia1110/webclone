#include<stdio.h>
#include<conio.h>
#include<string.h>
int demnguyenam(char s[])
{
	int dem=0;
	int len=strlen(s);
	for(int i=0; i<len;i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='u'||s[i]=='i'||s[i]=='o'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='U'||s[i]=='O')
		dem++;
	}	
	return dem;
}
int main()
{
	char s[90];
    gets(s);
	int kq=demnguyenam(s);
	printf("%d",kq);
	
}
