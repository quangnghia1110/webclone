#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int demtu(char s[])
{
	int l=strlen(s);
	int dem=0;
	if(s[0]==NULL)
		return 0;
	if(s[0]!=' ')
		dem++;
	for(int i=0;i<l;i++)
		if(s[i]!=' '&&s[i-1]==' ')
			dem++;
	return dem;
}
int demkytu(char s[])
{
	int dem=0;
	while(s[dem]!='\0')
		dem++;
	return dem;
}
void phanloai(char s[])
{
	char thuong[100], hoa[100], so[100], khac[100];
	int a = 0, b= 0, c = 0, d = 0; 
    int dem1=0,dem2=0,dem3=0,dem4=0;
	int len = strlen(s);
	for(int i = 0; i < len; i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			thuong[a++] = s[i]; 
            dem1++;
		} 
		else if(s[i] >= 'A' && s[i] <= 'Z'){
			hoa[b++] = s[i]; 
            dem2++;
		} 
		else if(s[i] >= '0' && s[i] <= '9'){
			so[c++] = s[i]; 
            dem3++;
		} 
		else
        {
             khac[d++] = s[i];
             dem4++; 
        }
	}
	thuong[a++] = '\0';
	hoa[b++] = '\0';
	so[c++] = '\0';
	khac[d++] = '\0'; 
	cout<<dem1<<" ";
	cout<<dem2<<" ";
	cout<<dem3<<" ";
	cout<<dem4;
}
void inthuong(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    
}
void inhoa(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
}
void hoadau(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') 
			s[i] += 32;
        if (s[i - 1] == ' ' || i == 0)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - 32;
        }
    }
}
void xoathua(char s[])
{
	for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]==' '&&s[i+1]==' ')
        {

            strcpy(&s[i], &s[i + 1]);
            i--;
        }

    }  
}
void xoahet(char s[])
{
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==' ')
		{
			strcpy(&s[i], &s[i + 1]);
			i--;
		}
	}
}
void xoanguyenam(char s[])
{
	for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]=='a'||s[i]=='e'||s[i]=='u'||s[i]=='i'||s[i]=='o'||s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'U' || s[i] == 'O')
        {

            strcpy(&s[i], &s[i + 1]);
            i--;
        }

    }  
}
int main()
{
	char s[100];
	gets(s);
	int kq1=demtu(s);
	cout<<kq1;
	cout<<"\n";
	int kq2=demkytu(s);
	cout<<kq2;
	cout<<"\n";
	phanloai(s);
	cout<<"\n";
	inthuong(s);
	cout<<s;
	cout<<"\n";
	inhoa(s);
	cout<<s;
	cout<<"\n";
	hoadau(s);
	cout<<s;
	cout<<"\n";
	xoathua(s);
	cout<<s;
	cout<<"\n";
	xoahet(s);
	cout<<s;
	cout<<"\n";
	xoanguyenam(s);
	cout<<s;
	cout<<"\n";
	
	
	
	
}
