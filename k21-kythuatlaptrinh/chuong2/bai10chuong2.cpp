#include<iostream>
#include<string.h>
using namespace std;
int namnhuan(int y)
{
	return (((y%4==0)&&(y%100!=0))||(y%400==0));
}
int kiemtra(int m, int y)
{
	int ngaytrongthang;
	switch(m)
	{
		case 1: case 3:case 5:case 7:case 8:case 10:case 12:
			ngaytrongthang=31;
			break;
		case 4:case 6:case 9:case 11:
			ngaytrongthang=30;
			break;
		case 2:
			if(namnhuan(y))
			{
				ngaytrongthang=29;
				break;
			}
			else
			{
				ngaytrongthang=28;
				break;
			}
	}

				
			
			
}
bool hople(int d, int m, int y)
{
	if(y<0)
		return false;
	if(m<1&&m>12)
		return false;
	if(d<1&&d>kiemtra(m,y))
		return false;
	return true;
}
int main()
{
	int d,m,y;
	cin>>d;
	cin>>m;
	cin>>y;
	if(hople(d,m,y))
	{
		cout<<"hop le";
		cout<<"\n";
		cout<<"Ngay tiep theo la: "<<d+1;
	}
	else
	{
		cout<<"khong hop le";
	}
}