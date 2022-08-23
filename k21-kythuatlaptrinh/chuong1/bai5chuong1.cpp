ll#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
struct SOPHUC
{
	float a;
	float b;	
};
void nhap(SOPHUC &sp)
{
	cout<<"\n";
	cout<<"Nhap phan thuc ";cin>>sp.a;
	cout<<"Nhap phan ao ";cin>>sp.b;
	cout<<"\n";
	
}
void xuat(SOPHUC sp)
{
	cout<<"Phan thuc vua nhap la "<<sp.a;
	cout<<"\n";
	cout<<"Phan thuc vua nhap la "<<sp.b;
	cout<<"\n";
}
void Xuat(SOPHUC sp)
{
	cout<<"\n";
	cout<<"Phan so thuc "<<sp.a;
	cout<<"\n";
	cout<<"Phan so ao "<<sp.b;
	cout<<"\n";
	cout<<"so phuc la "<<sp.a<<"+"<<sp.b<<"i";

}
SOPHUC tong(SOPHUC sp1, SOPHUC sp2)
{
	SOPHUC temp;
	temp.a=sp1.a+sp2.a;
	temp.b=sp1.b+sp2.b;
	return temp;
}
SOPHUC hieu(SOPHUC sp1, SOPHUC sp2)
{
	SOPHUC temp;
	temp.a=sp1.a-sp2.a;
	temp.b=sp1.b-sp2.b;
	return temp;
}
SOPHUC tich(SOPHUC sp1, SOPHUC sp2)
{
	SOPHUC temp;
	temp.a=sp1.a*sp2.a-sp1.b*sp2.b;
	temp.b=sp1.a*sp2.b+sp1.b*sp2.a;
	return temp;
}
SOPHUC thuong(SOPHUC sp1, SOPHUC sp2)
{
	SOPHUC temp;
	float tongbp;
	tongbp=sp2.a*sp2.a+sp2.b*sp2.b;
	temp.a=(sp1.a*sp2.a+sp1.b*sp2.b)/tongbp;
	temp.b=(sp1.b*sp2.a-sp1.a*sp2.b)/tongbp;
	return temp;
}

int main()
{
	SOPHUC sp,sp1,sp2,tongsp,hieusp,tichsp,thuongsp;
	cout<<"*** SO PHUC THU NHAT ***";
	nhap(sp1);
	xuat(sp1);
	cout<<"*** SO PHUC THU HAI ***";
	nhap(sp2);
	xuat(sp2);
	tongsp=tong(sp1,sp2);
	hieusp=hieu(sp1,sp2);
	tichsp=tich(sp1,sp2);
	thuongsp=thuong(sp1,sp2);
	cout<<"*** TINH TONG HAI SO PHUC ***";
	Xuat(tongsp);
	cout<<"\n";
	cout<<"*** TINH HIEU HAI SO PHUC ***";
	Xuat(hieusp);
	cout<<"\n";
	cout<<"*** TINH TICH HAI SO PHUC ***";
	Xuat(tichsp);
	cout<<"\n";
	cout<<"*** TINH THUONG HAI SO PHUC ***";
	Xuat(thuongsp);
	cout<<"\n";	
}