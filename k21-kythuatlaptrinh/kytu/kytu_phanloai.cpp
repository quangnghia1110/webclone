#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
	char s[50];
	gets(s);
	int thuong[50],hoa[50],so[50],khac[50];
	int a=0,b=0,c=0,d=0;
	int dem1=0,dem2=0,dem3=0,dem4=0;
	int l=strlen(s);
	for(int i=0;i<l;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			thuong[a++]=s[i];
			dem1++;
		}
		else if(s[i]>='A'&&s[i]<='Z')
		{
			hoa[b++]=s[i];
			dem2++;
		}
		else if(s[i]>='0'&&s[i]<='9')
		{
			so[c++]=s[i];
			dem3++;
		}
		else
		{
			khac[d++]=s[i];
			dem4++;
		}
	
	}
	cout<<dem1;
	cout<<dem2;
	cout<<dem3;
	cout<<dem4;
	
	
}
