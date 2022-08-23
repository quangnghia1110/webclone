#include<iostream>
#include<string.h>
#include <ctime>
using namespace std;
struct THOIGIAN
{
	int gio;
	int phut;
	int giay;	
};
void nhap(THOIGIAN &tg)
{
	do
	{
		cout<<"\nNhap vao gio: ";
		cin>>tg.gio;
		if(tg.gio<0 || tg.gio>24)
			cout<<"Nhap sai, yeu cau nhap lai gio! ";
	}while(tg.gio<0 || tg.gio>24);

	do
	{
		cout<<"\nNhap vao phut: ";
		cin>>tg.phut;
		if(tg.phut<0 || tg.phut>60)
			cout<<"Nhap sai, yeu cau nhap lai phut! ";
	}while(tg.phut<0 || tg.phut>60);

	do
	{
		cout<<"\nNhap vao giay: ";
		cin>>tg.giay;
		if(tg.giay<0 || tg.giay>60)
			cout<<"Nhap sai, yeu cau nhap lai giay! ";
	}while(tg.giay<0 || tg.giay>60);
}
void xuat(THOIGIAN tg)
{
	cout<<tg.gio<<":"<<tg.phut<<":"<<tg.giay;
	cout<<"\n";
} 
double khoangcach(THOIGIAN &tg1,THOIGIAN &tg2)
{
	int gio,phut,giay;
	return 1.0*(3600 * tg1.gio + 60 * tg1.phut + tg1.giay-3600 * tg2.gio - 60 * tg2.phut - tg2.giay);
}

int main()
{
	THOIGIAN tg1,tg2,tg;
	cout<<"*** Thoi gian thu nhat ***";
	cout<<"\n";
	nhap(tg1);
	xuat(tg1);
	cout<<"\n*** Thoi gian thu hai ***";
	cout<<"\n";
	nhap(tg2);
	xuat(tg2);
	int kc=khoangcach(tg1,tg2);
	if(kc<0)
		kc=-kc;
	cout<<"\nKhoang cach giua hai thoi gian vua nhap la: "<<kc<<" giay"<<"\n";
	int gio1=kc/3600;
	int phut1=kc%3600/60;
	int giay1=kc%60;
	cout<<gio1<<":"<<phut1<<":"<<giay1<<"\n";
	
} 
