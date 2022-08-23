#include<iostream>
using namespace std;
int kiemtra(char s[])
{
	int len=strlen(s);
	for(int i=0;i<len;i++)
	{
		if(s[i]!=s[len-1-i])
			return 0;
	}
	return 1;
}
int main()
{
	char s[50];
	gets(s);
	int kq=kiemtra(s);
	cout<<kq;
}