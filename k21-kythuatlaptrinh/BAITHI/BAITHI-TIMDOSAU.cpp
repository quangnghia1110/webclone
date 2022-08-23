#include<iostream>
using namespace std;
int tinhdosau(char s[]);
int main()
{
	char s[100];
	gets(s);
	int k=tinhdosau(s);
	cout<<k;
	return 0;
	
}
int lietke(int k)
{
	if(k==n)
	
}
int tinhdosau(char s[])
{
	int len=strlen(s);
	int i=0;
	int ngoacmo=0;
	int dosau=0;
	while(i<len)
	{
		if(s[i]=='(')
			ngoacmo++;
		else
		{
			if(ngoacmo==0)
				return -1;
			if(ngoacmo>dosau)
				dosau=ngoacmo;
			ngoacmo--;
		}
		i++;
	}
	if(ngoacmo==0)
		return dosau;
	else
		return -1;
}