#include<bits/stdc++.h>
using namespace std;
int check(char c,char b[],int k);
void Bai_9(char s[],int n);
int main()
{
	char s[100];
	gets(s);
	int n=strlen(s);
	Bai_9(s,n);
	return 0;
}
void Bai_9(char s[],int n)
{
	char b[100];
	b[0]=(int)s[0];
	int k=1;
	for(int i=1;i<n;i++)
		if(check(s[i],b,k)==1){
			b[k]=(int)s[i];
			k++;
		}
	for(int i=0;i<k;i++){
		int dem=0;
		for(int j=0;j<n;j++)
			if(b[i]==(int)s[j])
				dem++;
		cout<<b[i]<<":"<<dem<<endl;
	}
		
}
int check(char c,char b[],int k)
{
	for(int i=0;i<k;i++)
		if(b[i]==(int)c)
			return 0;
	return 1;
}
