#include<iostream>
#include<string.h>
using namespace std;
int dem(char s[])
{
	int sotu=0;
	int l=strlen(s);
	if(s[0]==NULL)
		return 0;
	if(s[0]!=' ')
		sotu++;
	for(int i=0;i<l;i++)
		if(s[i]!=' '&&s[i-1]==' ')
			sotu++;
	return sotu;
}
int main()
{
	char s[50];
	gets(s);
	int kq=dem(s);
	cout<<kq;
}