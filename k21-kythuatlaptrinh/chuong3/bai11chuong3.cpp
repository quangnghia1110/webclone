#include<iostream>
#include<string.h>
using namespace std;
void tich(char A[], char B[], char C[])
{
	strrev(A);
	strrev(B);
	int lenA=strlen(A);
	int lenB=strlen(B);
	for(int i=0;i<lenA+lenB;i++)
		C[i]='0';
	for(int iB=0;iB<lenB;iB++)
	{
		int nho=0;
		int iA;
		for(iA=0;iA<lenA;iA++)
		{
			int t=(B[iB]-'0')*(A[iA]-'0')+nho+(C[iA+iB]-'0');
			C[iA+iB]=t%10+'0';
			nho=t/10;
		}
		if(nho>0)
			C[iA+iB]=nho+'0';
	}
	if(C[lenA+lenB-1]!=0)
		C[lenA+lenB]='\0';
	else
		C[lenA+lenB-1]='\0';
	strrev(C);
	
	
}
int main()
{
	char A[100],B[100],C[100];
	gets(A);
	gets(B);
	tich(A,B,C);
	cout<<C;
}