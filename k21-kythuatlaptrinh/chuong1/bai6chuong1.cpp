#include<iostream>
#include <math.h>
#include<string.h>
using namespace std;
struct PHANSO
{
	int tu;
	int mau;	
};
void nhap(PHANSO &ps)
{
	cout << "Nhap tu: ";
 	cin >> ps.tu;
	cout << "Nhap mau: "; 
	cin >> ps.mau;
}
void xuat(PHANSO &ps)
{
	if (ps.mau != 1 && ps.mau != 0)
		cout << ps.tu << "/" << ps.mau;
	else if (ps.mau == 1)
		cout << ps.tu;
	else
		cout << "Khong the chia 0";
}
int uc(int a, int b) {
	a=abs(a);
	b=abs(b);
	while (a*b!=0){
		if (a >= b)
			a = a%b;
		else
			b = b%a;
	}
	return a + b;
}

void rutgon (PHANSO &ps) {
	int a = uc(ps.tu,ps.mau);
	ps.tu = ps.tu / a;
	ps.mau = ps.mau / a;
	if (ps.mau < 0)
	{
		ps.tu = -ps.tu;
		ps.mau = -ps.mau;
	}
}
PHANSO tong(PHANSO ps1, PHANSO ps2) {
	PHANSO temp;
	temp.tu = ps1.tu*ps2.mau + ps2.tu*ps1.mau;
	temp.mau = ps1.mau*ps2.mau;
	rutgon(temp);
	return temp;
}

PHANSO hieu(PHANSO ps1, PHANSO ps2) {
	PHANSO temp;
	temp.tu = ps1.tu*ps2.mau - ps2.tu*ps1.mau;
	temp.mau = ps1.mau*ps2.mau;
	rutgon(temp);
	return temp;
}

PHANSO tich(PHANSO ps1, PHANSO ps2) {
	PHANSO temp;
	temp.tu = ps1.tu*ps2.tu;
	temp.mau = ps1.mau*ps2.mau;
	rutgon(temp);
	return temp;
}

PHANSO thuong(PHANSO ps1, PHANSO ps2) {
	PHANSO temp;
	temp.tu = ps1.tu*ps2.mau;
	temp.mau = ps1.mau*ps2.tu;
	rutgon(temp);
	return temp;
}
void tumaux1so(PHANSO &ps, int a) {
	ps.tu = ps.tu*a;
	ps.mau = ps.mau*a;
}

void quydong(PHANSO &ps1, PHANSO &ps2) {
	int temp;
	if (ps1.mau == ps2.mau)
		return;
	if (ps1.mau % ps2.mau == 0) {
		temp = ps1.mau/ps2.mau;
		tumaux1so(ps2, temp);
		return;
	}
	if (ps2.mau % ps1.mau == 0) {
		temp = ps2.mau/ps1.mau;
		tumaux1so(ps1, temp);
		return;
	}

}
void sosanh(PHANSO ps1, PHANSO ps2) {
	quydong(ps1,ps2);
	if (ps1.tu > ps2.tu)
	{
		xuat(ps1); cout << " > "; xuat(ps2);
	}
	else 
		if (ps1.tu < ps2.tu)
		{
			xuat(ps1); cout << " < "; xuat(ps2);
		}
		else
		{
			xuat(ps1); cout << " = "; xuat(ps2);		
		}
}

int main()
{
	PHANSO tongps,hieups,tichps,thuongps;
	PHANSO ps1,ps2;
	
	cout << "Nhap phan so thu 1:\n";
	nhap(ps1);
	cout << "Nhap phan so thu 2:\n";
	nhap(ps2);
	
	tongps=tong(ps1,ps2);
	hieups=hieu(ps1,ps2);
	tichps=tich(ps1,ps2);
	thuongps=thuong(ps1,ps2);
	
	cout<<" *** TINH TONG, HIEU, TICH, THUONG HAI PHAN SO *** ";
	cout << "\n";
	cout << "Tong: "; 
	xuat(tongps); 
	cout << "\n";
	
	cout << "Hieu: "; 
	xuat(hieups); 
	cout << "\n";
	
	cout << "Tich: ";
 	xuat(tichps); 
 	cout << "\n";
	
	cout << "Thuong: "; 
	xuat(thuongps); 
	cout << "\n";
	
	cout<<" *** RUT GON PHAN SO *** ";
	cout << "\n";
	cout << "Phan so 1 sau khi rut gon la : "; 
	rutgon(ps1);
	xuat(ps1);
	cout << "\n";
	
	cout << "Phan so 2 sau khi rut gon la : "; 
	rutgon(ps2);
	xuat(ps2); 
	cout << "\n";
	
	cout<<" *** QUI DONG HAI PHAN SO *** ";
	cout << "\n";
	quydong(ps1,ps2);
	cout<<"Phan so 1 sau khi quy dong la ";
	xuat(ps1);
	cout << "\n";
	cout<<"Phan so 2 sau khi quy dong la ";
	xuat(ps2);
	cout << "\n";
	
	cout<<" *** SO SANH HAI PHAN SO *** ";
	cout << "\n";
	cout<<"Ket qua sau khi so sanh la ";
	sosanh(ps1,ps2);
	cout << "\n";
	
	
}











