#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[200];
	gets(s);
	int l=strlen(s);
	int a=0,b=0,c=0,d=0;
	int dem1=0,dem2=0,dem3=0,dem4=0;
	int thuong[200],hoa[200],so[200],khac[200];
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
	thuong[a++] = '\0';
	hoa[b++] = '\0';
	so[c++] = '\0';
	khac[d++] = '\0'; 
	cout<<dem1;
	cout<<"\t";
	cout<<dem2;
	cout<<"\t";
	cout<<dem3;
	cout<<"\t";
	cout<<dem4;
}