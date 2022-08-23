#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int doiHe2SangHe10(char S[]);
void doiHe10SangHe2(char S[],int n);
void nhap(int A[],int &n);
int chr(int n);
int main()
{
	int A[1100],n,m=0;
	char S[100];
	nhap(A,n);
	for (int i=0;i<n;i++)
	{
		doiHe10SangHe2(S,A[i]);
		for (int j=0;j<strlen(S);j++)
			if (j%2==0)
				S[j]='1';
		m=max(m,doiHe2SangHe10(S));
	}
	cout<<m;
	return 0;	
}
void doiHe10SangHe2(char S[],int n)
{
	int i=0;
	while (n!=0)
	{
		S[i]=chr(n%2);
		n/=2;
		i++;
	}
	S[i]='\0';
	//strrev(S);
}
int doiHe2SangHe10(char S[])
{
	int s=0;
	for (int i=0;i<strlen(S);i++)
		s+=pow(2,i)*(S[i]-'0');
	return s;
}
int chr(int n)
{
	if (n<10)
		return n+'0';
	return n+55;
}
void nhap(int A[],int &n)
{
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>A[i];
}