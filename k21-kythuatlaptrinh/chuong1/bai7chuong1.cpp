#include <iostream>
#include<string.h>
using namespace std;
struct HonSo
{
    int Nguyen;
    int Tu;
    int Mau;
};
void Nhap(HonSo &hs)
{
    cout<<"Nhap so nguyen ";
    cin>>hs.Nguyen;
    cout<<"Nhap tu so ";
    cin>>hs.Tu;
    cout<<"Nhap mau so ";
    cin>>hs.Mau;    
}
void Xuat(HonSo hs)
{
    cout<<"So nguyen vua nhap la "<<hs.Nguyen;
    cout<<"\n";
    cout<<"Tu so vua nhap la "<<hs.Tu;
    cout<<"\n";
    cout<<"Mau so vua nhap la "<<hs.Mau;
    cout<<"\n";
}
void xuat(HonSo hs)
{
	cout<<hs.Nguyen*hs.Mau+hs.Tu<<"/"<<hs.Mau;
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

void rutgon (HonSo &hs) {
	int a = uc(hs.Tu,hs.Mau);
	hs.Tu = hs.Tu / a;
	hs.Mau = hs.Mau / a;
	if (hs.Mau < 0)
	{
		hs.Tu = -hs.Tu;
		hs.Mau = -hs.Mau;
	}
}
HonSo TinhTong(HonSo hs1, HonSo hs2)
{
    HonSo hs;
    hs.Nguyen = hs1.Nguyen + hs2.Nguyen;
    hs.Tu = hs1.Tu * hs2.Mau + hs1.Mau * hs2.Tu;
    hs.Mau = hs1.Mau * hs2.Mau;
    
    return hs;
}
HonSo TinhTich(HonSo hs1, HonSo hs2)
{
	HonSo hs;
	hs1.Tu=hs1.Nguyen*hs1.Mau+hs1.Tu;
	hs2.Tu=hs2.Nguyen*hs2.Mau+hs2.Tu;
	hs.Tu=hs1.Tu*hs2.Tu;
	hs.Mau=hs1.Mau*hs2.Mau;
	
	return hs;
	
}

int main()
{
    HonSo hs1,hs2,hs;
    cout<<"\n*** Hon so 1 *** \n";
    Nhap(hs1);
    cout<<"\n";
    Xuat(hs1);
    rutgon(hs1);
    cout<<"\nKet qua khi doi hon so sang phan so la ";
    xuat(hs1);
    cout<<"\n";
    
    cout<<"\n*** Hon so 2 *** \n";
    Nhap(hs2);
    cout<<"\n";
    Xuat(hs2);
    rutgon(hs2);
    cout<<"\nKet qua khi doi hon so sang phan so la ";
    xuat(hs2);
    cout<<"\n";

	cout<<"\nTong hai hon so la: ";
    xuat(TinhTong(hs1,hs2));
    
    cout<<"\nTich hai hon so la: \n";
    xuat(TinhTich(hs1,hs2));
    
    

}