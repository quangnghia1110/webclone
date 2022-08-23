#include<bits/stdc++.h>
#include <string> 
using namespace std;
void dao_chuoi(char s[]);
int main()
{
	char s[100000];
	gets(s);
	int n=strlen(s);
	char tg[100000]="";
	int k=0;
	for(int i=0;i<=n;i++){
		if(s[i]==' ' || i==n){
			dao_chuoi(tg);
			for(int i=0;i<k;i++)
				cout<<tg[i];
			cout<<" ";
			char tg[100000]="";
			k=0;
		}
		else{
			tg[k]=s[i];
			k++;
		}
	}
	return 0;
}
void dao_chuoi(char s[])
{
	for(int i=0;i<=(strlen(s)-1)/2;i++){
		char tg=s[i];
		s[i]=s[strlen(s)-1-i];
		s[strlen(s)-1-i]=tg;
	}
}

