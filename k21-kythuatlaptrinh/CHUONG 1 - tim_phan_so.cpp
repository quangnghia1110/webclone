#include <iostream>
#include <math.h>
using namespace std;

struct PHANSO {
	int tu;
	int mau;
};

void nhap(PHANSO &ps);
void xuat(PHANSO ps);
int uc(int a, int b);
void rutgon (PHANSO &ps);
PHANSO tong(PHANSO ps1, PHANSO ps2);
PHANSO hieu(PHANSO ps1, PHANSO ps2);
PHANSO tich(PHANSO ps1, PHANSO ps2);
PHANSO thuong(PHANSO ps1, PHANSO ps2);
void nghdao(PHANSO ps1, PHANSO &ps2);
void tumaux1so(PHANSO &ps, int a);
void quydong(PHANSO &ps1, PHANSO &ps2);
void sosanh(PHANSO ps1, PHANSO ps2);
void kt_amduong(PHANSO ps);
void kt_toigian(PHANSO ps);

int main() {
	PHANSO tongps, hieups, tichps, thuongps;
	PHANSO ps1, ps2;
	cout << "Nhap phan so thu 1:\n";
	nhap(ps1);
	cout << "Nhap phan so thu 2:\n";
	nhap(ps2);
		
	tongps = tong(ps1,ps2);
	hieups = hieu(ps1,ps2);
	tichps = tich(ps1,ps2);
	thuongps = thuong(ps1,ps2);
	
	xuat(ps1); cout << ":\n"; 
	kt_amduong(ps1);
	kt_toigian(ps1);

	xuat(ps2); cout << ":\n"; 
	kt_amduong(ps2);
	kt_toigian(ps2);
	
	cout << "Tong: "; xuat(tongps); cout << "\n";
	cout << "Hieu ps1 va ps2: "; xuat(hieups); cout << "\n";
	cout << "Tich: "; xuat(tichps); cout << "\n";
	cout << "Thuong ps1 va ps2 : "; xuat(thuongps); cout << "\n";
	cout << "Sau khi quy dong 2 phan so:\n";
	quydong(ps1,ps2);
	cout << "PS1: "; xuat(ps1); cout << "; PS2: "; xuat(ps2); cout << "\n";
	sosanh(ps1,ps2);
	
	
	
	return 0;
}

void nhap(PHANSO &ps) {
	cout << "Nhap tu: "; cin >> ps.tu;
	cout << "Nhap mau: "; cin >> ps.mau;	
}

void xuat(PHANSO ps) {
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

void nghdao(PHANSO ps1, PHANSO &ps2) {
	if (ps1.tu > 0)
	{
		ps2.tu = ps1.mau;
		ps2.mau = ps1.tu;
	}
	else
	{
		ps2.tu = -ps1.mau;
		ps2.mau = -ps1.tu;	
	}	
}

void tumaux1so(PHANSO &ps, int a) {
	ps.tu = ps.tu*a;
	ps.mau = ps.mau*a;
}

void quydong(PHANSO &ps1, PHANSO &ps2) {
	int temp = ps2.mau;
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
	else if (ps1.tu < ps2.tu)
	{
		xuat(ps1); cout << " < "; xuat(ps2);
	}
	else
	{
		xuat(ps1); cout << " = "; xuat(ps2);		
	}
}

void kt_amduong(PHANSO ps) {
	int temp = ps.mau*ps.tu;
	if (temp > 0)
		cout << "Phan so duong\n";
	else if (temp < 0)
		cout << "Phan so am\n";
	else
		cout << "Phan so khong duong khong am\n";
}

void kt_toigian(PHANSO ps) {
	int a = uc(ps.tu,ps.mau);
	if (a == 1)
	{
		cout << "Phan so toi gian\n";
		return;
	}
	cout << "Phan so chua toi gian\n";
} 
