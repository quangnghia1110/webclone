#include<stdio.h>
#include<conio.h>
#include<string.h>
int kiemtra(int n)
{
	if(n<2)
		return 0;
	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return 0;
		return 1;
}
int demso(char s[])
{
	int dem=0;
	int max=0;
	int len=strlen(s);
	for(int i=0; i<len;i++)
	{
		if('0'<=s[i]&&s[i]<='9')
		{
			if(kiemtra(s[i])==1&&s[i]>max)
			{
				s[i]==max;
			}
		}
		
	}	
	if(max==0)
	{
		return 0;
	}
	else{
		return max;
	}
}
int main()
{
	char s[100];
    gets(s);
    if(demso(s)==0)
    {
    	return 0;
    }
    else
    {
		printf("%d",demso(s));
    }
}
	