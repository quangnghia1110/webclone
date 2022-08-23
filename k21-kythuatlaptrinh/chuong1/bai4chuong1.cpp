#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
struct THOIGIAN
{
	int ngay;
	int thang;
	int nam;
		
};
void nhap(THOIGIAN &tg);
void xuat(THOIGIAN tg);
int namnhuan(int nam);
void Xuat(THOIGIAN tg);
int songaytrongthang( int thang, int ngay);
int khoangcach(THOIGIAN &tg1,THOIGIAN &tg2);
int main()
{
	THOIGIAN tg,tg1,tg2;
	int kq;
	cout<<"*** Thoi gian thu nhat ***";
	cout<<"\n";
	nhap(tg1);
	xuat(tg1);
	Xuat(tg1);
	cout<<"\n";
	cout<<"*** Thoi gian thu hai ***";
	cout<<"\n";
	nhap(tg2);
	xuat(tg2);
	Xuat(tg2);
	kq=khoangcach(tg1,tg2);
	cout<<" ngay";
	cout<<"\n";
}
void nhap(THOIGIAN &tg)
{
	do{
		cout<<"Nhap vao ngay: ";
		cin>>tg.ngay;
		if(tg.ngay<=0||tg.ngay>songaytrongthang(tg.thang,tg.ngay))
			cout<<"Nhap sai, yeu cau nhap lai gio! \n";
	}while(tg.ngay<=0||tg.ngay>songaytrongthang(tg.thang,tg.ngay));
	do{
		cout<<"Nhap vao thang: ";
		cin>>tg.thang;
		if(tg.thang<=0||tg.thang>12)
			cout<<"Nhap sai, yeu cau nhap lai gio! \n";
	}while(tg.thang<=0||tg.thang>12);
	do{
		cout<<"Nhap vao nam: ";
		cin>>tg.nam;
		if(tg.nam<=0)
			cout<<"Nhap sai, yeu cau nhap lai gio! \n";
	}while(tg.nam<=0);		
}
void xuat(THOIGIAN tg)
{
	cout<<"\n";
	cout<<"Ngay vua nhap la "<<tg.ngay;
	cout<<"\n";
	cout<<"Thang vua nhap la "<<tg.thang;
	cout<<"\n";
	cout<<"Nam vua nhap la "<<tg.nam;
	cout<<"\n";	
}
void Xuat(THOIGIAN tg)
{

		cout<<"\n";
		if((tg.ngay&&tg.ngay&&tg.nam)<=songaytrongthang(tg.thang,tg.ngay))
		{
		cout<<"Ngay thang nam vua nhap la "<<tg.ngay<<"/"<<tg.thang<<"/"<<tg.nam;
		}
		else
		{
			cout<<"Nhap lai";
		}
}
int namnhuan(int nam)
{
	THOIGIAN tg;
	if((tg.nam%400==0)||(tg.nam%4==0)&&(tg.nam&100!=0))
		return 1;
	else
		return 0;
}
int songaytrongthang( int thang, int ngay)
{
	THOIGIAN tg;
	if(tg.thang==4||tg.thang==6||tg.thang==9||tg.thang==11)
		return 30;
	else
		if(tg.thang==2)
			if(namnhuan(tg.nam))
				return 28;
			else
				return 29;
		else
			return 31;		
}
int khoangcach(THOIGIAN &tg1,THOIGIAN &tg2)
{
	int kq;
	int NAM=0,THANG=0,NGAY=0;
	for( int i=tg1.nam;i<tg2.nam;i++)
	{
		if(namnhuan(i))
			NAM=NAM+366;
		else
			NAM=NAM+365;
	}
	int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(namnhuan(tg2.nam))
		a[1]=29;
	
	if(tg1.thang>tg2.thang)
	{
		for(int i=tg2.thang;i<tg1.thang;i++)
			THANG=THANG-a[i-1];
	}
	else
	{
		for(int i=tg1.thang;i<tg2.thang;i++)
			THANG=THANG+a[i-1];
	}
	NGAY=tg2.ngay-tg1.ngay;
	cout<<"\n";
	kq=NAM+THANG+NGAY;
	if(kq<0)
		kq=-kq;
	cout<<"\n";
	cout<<"*** Khoang cach giua hai khoang thoi gian la "<<kq;	
}

