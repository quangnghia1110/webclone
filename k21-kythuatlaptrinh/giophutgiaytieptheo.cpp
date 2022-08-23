#include<iostream>
#include<math.h>
using namespace std;
int thoigian(int h, int m,int s, int &h1, int &m1, int &s1)
{
	h1=h;
	m1=m;
	s1=s+1;
	if(h>=0&&h<24&&m>=0&&m<60&&s>=0&&s<0)
	{
	if(s==60)
	{
		s1=0;
		m1=m+1;
		if(m1==60)
		{
			m1=0;
			h1=h1+1;
			if(h1==24)
				h1=0;
			
		}
		
	}
	return true;
	}
	return false;
		
}
void nhap(int &h, int &m, int &s)
{
	cin>>h>>m>>s;
}
void xuat(int co, int h, int m,int s)
{
	if(co)
		cout<<h<<" "<<m<<" "<<s;
		
	else
	cout<<"khong hop le";					
}
int main()
{
	int h,m,s,h1,m1,s1;
	nhap(h,m,s);
	bool co=thoigian(h,m,s,h1,m1,s1);
	xuat(co,h1,m1,s1);
	return 0;	
}