#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int dem=0;
	char s[50];
	gets(s);
	while(s[dem]!='\0')
		dem++;
	cout<<dem;
}