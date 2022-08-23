#include<iostream>
using namespace std;
int namnhuam( int y)
{
	if((y%400==0)||(y%4==0&&y%100!=0))
		return 1;
	else
		return 0;
}
int songaytrongthang( int m, int y)
{
	if(m==4||m==6||m==9||m==11)
		return 30;
	else
		if(m==2)
			if(namnhuam(y))
				return 29;
			else
				return 28;
		else
			return 31;
}

int lich(int d, int m,int y, int &d1, int &m1, int &y1)
{

		
	if(d>0&&m>0&&y>0&&m<=12&&d<=songaytrongthang(m,y))
	{
		d1=d;
		m1=m;
		y1=y;
		if(d1<songaytrongthang(m,y))
			d1++;
		else
		{
			d1=1;
			if(m1<12)
				m1++;
			else
			{
				m1=1;
				y1++;
			}
		}
	return 1;
	}
	else
	{
		return 0;
	}
}

int hople(int d, int m, int y)
{
	if(d>0&&m>0&&y>0&&m<=12&&d<=songaytrongthang(m,y))
		return 1;
	else
		return 0;
}
void nhap(int &d, int &m, int &y)
{
	cin>>d>>m>>y;
}
void xuat(int co, int d,int m, int y)
{
	if(co)
		cout<<d<<" "<<m<<" "<<y;
	else
		cout<<"Ngay thang nam khong hop le";	
}
int main()
{
	int d,m,y,d1,m1,y1;
	nhap(d,m,y);
	int co=lich(d,m,y,d1,m1,y1);
	xuat(co,d1,m1,y1);
	
}