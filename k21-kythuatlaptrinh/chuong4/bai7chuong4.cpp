#include<iostream>
#include<string.h>
using namespace std;
int tong(char s[])
{
	int len=strlen(s);
	int tong=0;
	int i=0;
	int so=0;
	while(i<=len)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			so=so*10+(s[i]-'0');
		}
		else
		{
			tong =tong +so;
			so=0;
		}
		i++;
	}
	return tong;
}
int main(){
	char s[50];
	gets(s);
	int kq=tong(s);
	cout<<kq;
}