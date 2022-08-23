using namespace std;
#include <iostream>
#include <cstring>
#define size 200

void nhapSo(char a[], char b[], char c[]);
void soLonNhat(char a[], char b[], char c[]);
void chuanHoaChuoi(char a[], char b[], char c[]);

int main()
{
	char a[size],b[size],c[size];
	nhapSo(a,b,c);
	soLonNhat(a,b,c);
}
void nhapSo(char a[], char b[], char c[])
{
	cin.getline(a,200);
	cin.getline(b,200);
	cin.getline(c,200);
}

void chuanHoaChuoi(char a[], char b[], char c[])
{
	int lena=strlen(a);
	int lenb=strlen(b);
	int lenc=strlen(c);
	int max;
	if(lena>lenb)
	{
		if(lena>lenc)
		{
			max=lena;
		}		
		else
			max = lenc;
	}
	else
	{
		if(lenb>lenc)
			max =lenb;
		else
			max = lenc;
	}
	strrev(a);
	strrev(b);
	strrev(c);
	for(int i=lena;i<max;i++)
		a[i]='0';
	a[max]='\0';
	for(int i=lenb;i<max;i++)
		b[i]='0';
	b[max]='\0';
	for(int i=lenc;i<max;i++)
		c[i]='0';
	c[max]='\0';
	strrev(a);
	strrev(b);
	strrev(c);
}

void soLonNhat(char a[], char b[], char c[])
{
	chuanHoaChuoi(a,b,c);
	if(strcmp(a,b)==1)//a dai hon b
	{
		if(strcmp(a,c)==1)//a dai c
			cout << a;
		else
			cout << c;
	}
	else 
	{
		cout <<endl;
		if(strcmp(b,c)==1)
			cout << b;
		else
			cout << c;
	}
}

/*1234567890
56745674
635463566*/
