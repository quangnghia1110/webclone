#include<iostream>
#include<string.h>
using namespace std;
struct LINHKIEN
{
	char TEN[30];
	char QUYCACH[30];
	char LOAI;
	int GIA;
};
void nhap(LINHKIEN &lk)
{
	cout<<"\n";
	cout<<"Nhap ten linh kien ";
	fflush(stdin);
	gets(lk.TEN);
	cout<<"Nhap quy cach ";
	fflush(stdin);
	gets(lk.QUYCACH);
	cout<<"Nhap loai linh kien ";
	cin>>lk.LOAI;
	cout<<"Nhap don gia linh kien ";
	cin>>lk.GIA;
	cout<<"\n";	
}
void nhapmang(LINHKIEN lk[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\n";
		cout<<"Linh kien thu "<<i ;
		nhap(lk[i]);
	}
}
void xuat(LINHKIEN lk)
{
	cout<<"\n";
	cout<<"Ten linh kien vua nhap la ";cout<<lk.TEN;
	cout<<"\n";
	cout<<"Quy cach vua nhap la ";cout<<lk.QUYCACH;
	cout<<"\n";
	cout<<"Loai linh kien vua nhap la ";cout<<lk.LOAI;
	cout<<"\n";
	cout<<"Don gia linh kien vua nhap la ";cout<<lk.GIA;
	cout<<"\n";
	
	
}
void xuatmang(LINHKIEN lk[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\n";
		cout<<"Thong tin linh kien thu "<<i ;
		xuat(lk[i]);
	}
}
//so sanh ham chuoi
void sxtheoloaivaten(LINHKIEN lk[], int n)
{
	LINHKIEN temp;
	for(int i = 0; i < n - 1; i++)
	{
        for(int j = i + 1; j < n; j++)
		{
			if((lk[i].LOAI>lk[j].LOAI)||(lk[i].LOAI==lk[j].LOAI&&strcmp(lk[i].TEN,lk[j].TEN)>0))
			{
				temp=lk[i];
				lk[i]=lk[j];
				lk[j]=temp;	
			}
		}
	}
}
void sxtheoloai(LINHKIEN lk[], int n)
{
	LINHKIEN temp;
	for(int i = 0; i < n - 1; i++)
	{
        for(int j = i + 1; j < n; j++)
		{
			if(lk[i].LOAI>lk[j].LOAI)
			{
				temp=lk[i];
				lk[i]=lk[j];
				lk[j]=temp;	
			}
		}
	}
}
bool kiemtra(LINHKIEN lk[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(lk[i].LOAI=='A'||lk[i].LOAI=='a')
		{
			dem++;
		}
	}
	if(dem>1)
	{
		return true;
	}
	return false;
}
int main()

{
	LINHKIEN lk[100];
	int n;
	
	cout<<"*** NHAP SO LUONG LINH KIEN ***";
	cout<<"\n";
	cin>>n;
	cout<<"\n";
	cout<<"*** NHAP THONG TIN LINH KIEN ***";
	nhapmang(lk,n);
	cout<<"\n";
	cout<<"*** XUAT THONG TIN LINH KIEN ***";
	xuatmang(lk,n);
	cout<<"\n";
	cout<<"*** SAP XEP LINH KIEN THEO TEN ***";
	sxtheoloaivaten(lk,n);
	xuatmang(lk,n);
	cout<<"\n";
	cout<<"*** KIEM TRA LINH KIEN CO DU LAP RAP ***";
	cout<<"\n";
	bool kq=kiemtra(lk,n);
	cout<<kq;
	cout<<"\n";
	
}