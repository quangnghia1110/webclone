#include<iostream>
#include<string.h>
using namespace std;
void chen(char s[], int k)
{
	strrev(s);
	int l=strlen(s);
	for( int i=0;i<k;i++)
		s[l+i]='0';
	s[l+k]='\0';
	strrev(s);
}

void chuanhoa(char s1[],char s2[])
{
	int l1=strlen(s1);
	int l2=strlen(s2);
	if(l1>l2)
		chen(s2,l1-l2);
	else
		chen(s1,l2-l1);
}
void tong(char s1[], char s2[], char s[])
{
	int len1=strlen(s1);
	int len2=strlen(s2);
	if(len1 > len2 || len1 < len2){
		chuanhoa(s1, s2); 
	} 
	strrev(s1);
	strrev(s2);
	int nho=0;
	int l=strlen(s1);
	for(int i=0;i<l;i++)
	{
		int t=(s1[i]-'0')+(s2[i]-'0')+nho;
		s[i]=t%10+'0';
		nho=t/10;
	}
	if(nho==1)
		s[l++]='1';
	s[l]='\0';
	strrev(s);
		puts(s);
}
void lontrunho(char s1[], char s2[], char s[])
{
	strrev(s1);
	strrev(s2);
	int nho=0;
	int l=strlen(s1);
	for(int i=0;i<l;i++)
	{
		int t=(s1[i]-'0')-(s2[i]-'0')-nho;
		if(t<0)
		{
			s[i]=t+10+'0';
			nho=1;
		}
		else
		{
			s[i]=t+'0';
			nho=0;
		}
	}
	s[l]='\0';
	strrev(s);
	
}
void tinhhieu(char s1[], char s2[], char s[] )
{
	
	if(strcmp(s1,s2)>0)
	{
		lontrunho(s1,s2,s);
		puts(s);
}
	else
	{
		lontrunho(s2,s1,s);
		strrev(s);
		int l=strlen(s);
		s[l]='-';
		s[l+1]='\0';
		strrev(s);
		puts(s);
	}

}
int main(){
	char s1[1000], s2[1000], s3[1000], s4[1000], s[1000];
	gets(s1);
	gets(s2); 
	strcpy(s3, s1);
	strcpy(s4, s2); 
	tong(s1, s2, s);
	tinhhieu(s3, s4, s); 
} 
