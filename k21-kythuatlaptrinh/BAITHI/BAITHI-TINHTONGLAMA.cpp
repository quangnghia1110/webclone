#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[101];
	gets(s);
	int l=strlen(s);
	int tong=0;
	int dem=1;
	for(int i=0;i<l;i++)
	{
		if(s[i]=='V')
		{
			tong=tong+dem;
			dem++;
		}
		else
		{
			dem=1;
		}
	}
	
	cout<<tong;
}