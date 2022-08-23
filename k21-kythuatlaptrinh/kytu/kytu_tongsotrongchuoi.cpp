#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
	char s[100];
	gets(s);
	int l=strlen(s);
	int tong=0;
	int so=1;
	for(int i=0;i<l;i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			so=so*10+(s[i]-'0');
		}
		else
		{
			tong=tong+so;
			so=0;
		}
	}
	cout<<tong;
}
