#include <iostream>
using namespace std;
typedef struct PHANSO
{
	int TuSo;
	int MauSo;
}PS;
void Nhap(PS& x)
{
	cout << "Nhap tu so: ";
	cin >> x.TuSo;
	do
	{
		cout << "Nhap mau so: ";
		cin >> x.MauSo;
	} while (x.MauSo == 0);
}
void QuyDong(PS x, PS y, int& a, int& b, int& MauChung)
{
	a = x.TuSo * y.MauSo;
	b = y.TuSo * x.MauSo;
	MauChung = x.MauSo * y.MauSo;
}
int USCLN(int m, int n)
{
	if (m % n == 0)
		return n;
	return USCLN(n, m % n);
}
void RutGon(int a, int b)
{
	int i = USCLN(a, b);
	a = a / i;
	b = b / i;
	if ((a < 0 && b < 0) || (a > 0 && b < 0))
	{
		a = -a;
		b = -b;
	}
	if (a % b == 0) cout << a / b << '\n';
	else cout << a << "/" << b << '\n';
}
void Xuat(PS x, PS y,int &a,int &b,int &MauChung)
{
	QuyDong(x, y, a, b, MauChung);
	cout << "Tong 2 phan so = ";
	RutGon(a + b, MauChung);

}
int main()
{
	PS PS1, PS2;
	int a, b, MauChung;
	cout << "Nhap phan so thu nhat:" << '\n';
	Nhap(PS1);
	cout << "Nhap phan so thu hai:" << '\n';
	Nhap(PS2);
	Xuat(PS1, PS2, a, b, MauChung);
	return 0;
}
