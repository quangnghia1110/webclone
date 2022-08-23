#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
struct TOADO
{
	int x;
	int y;	
};
void nhap(TOADO &td)
{
	
	cout<<"\n";
	cout<<"Nhap hoanh do ";cin>>td.x;
	cout<<"Nhap tung do ";cin>>td.y;
}
void xuat(TOADO td)
{
	
	
	cout<<"Hoanh do vua nhap la "<<td.x;
	cout<<"\n";
	cout<<"Tung do vua nhap la "<<td.y;
	cout<<"\n";
}
void Xuat(TOADO td)
{
	cout<<td.x<<","<<td.y;	
	cout<<"\n";
	
}
void doixung(TOADO td)
{
	if(td.x==0)
	{
		cout<<"Khong co diem doi xung qua truc tung";
		cout<<"\n";
		cout<<"Diem doi xung qua truc hoanh la "<<td.x<<","<<-td.y;
		cout<<"\n";
	}
	else
		if(td.y==0)
		{
			cout<<"Khong co diem doi xung qua truc hoanh ";
			cout<<"\n";
			cout<<"Diem doi xung qua truc tung la "<<-td.x<<","<<td.y;
			cout<<"\n";
		}
		else
		{
			cout<<"Diem doi xung qua truc tung la "<<-td.x<<","<<td.y;
			cout<<"\n";
			cout<<"Diem doi xung qua truc hoanh la "<<td.x<<","<<-td.y;
			cout<<"\n";
		}
}
TOADO tong(TOADO td1,TOADO td2)
{
	TOADO temp;
	temp.x=td1.x+td2.x;
	temp.y=td1.y+td2.y;
	return temp;
}
TOADO hieu(TOADO td1,TOADO td2)
{
	TOADO temp;
	temp.x=td1.x-td2.x;
	temp.y=td1.y-td2.y;
	return temp;
}
TOADO tich(TOADO td1,TOADO td2)
{
	TOADO temp;
	temp.x=td1.x*td2.x;
	temp.y=td1.y*td2.y;
	return temp;
}
double khoangcach(TOADO td1,TOADO td2)
{
	double kc;
	kc=sqrt(double(td1.x-td2.x)*(td1.x-td2.x)+(td1.y-td2.y)*(td1.y-td2.y));
	return kc;
}
int main()
{
	TOADO td,td1,td2;
	TOADO tongtd,hieutd,tichtd;
	double KHOANGCACH;
	cout<<"*** TOA DO 1 ***";
	nhap(td1);
	xuat(td1);
	doixung(td1);
	cout<<"*** TOA DO 2 ***";
	nhap(td2);
	xuat(td2);
	doixung(td2);
	tongtd=tong(td1,td2);
	hieutd=hieu(td1,td2);
	tichtd=tich(td1,td2);
	cout<<"*** TONG CUA HAI DIEM ***";
	cout<<"\n";
	Xuat(tongtd);
	cout<<"\n";
	cout<<"*** HIEU CUA HAI DIEM ***";
	cout<<"\n";
	Xuat(hieutd);
	cout<<"\n";
	cout<<"*** TICH CUA HAI DIEM ***";
	cout<<"\n";
	Xuat(tichtd);
	cout<<"\n";
	cout<<"*** KHOANG CACH CUA HAI DIEM ***";
	cout<<"\n";
	KHOANGCACH=khoangcach(td1,td2);
	cout<<KHOANGCACH;
	cout<<"\n";
}
