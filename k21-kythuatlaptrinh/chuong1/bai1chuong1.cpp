#include<iostream>
#include<string.h>
#include <ctime>
using namespace std;
struct ngaysinh
{
	int ngay;
	int thang;
	int nam;	
};
struct sinhvien
{
	char MSSV[5];
	char TEN[30];
	ngaysinh date;
	char DIACHI[50];
	char GIOITINH[3];
	float DIEMTB;
		
};
void nhapsv(sinhvien &sv)
{
	cout << "Nhap MSSV: "; 
	fflush(stdin);
	gets(sv.MSSV);
	cout << "Nhap HO VA TEN: "; 
	fflush(stdin);
	gets(sv.TEN);
    cout << "Ngay sinh: ";
	cin >> sv.date.ngay;
	cin >>sv.date.thang;
	cin >> sv.date.nam;
	cout << "Dia chi: ";
	fflush(stdin);
	gets(sv.DIACHI);
	cout << "Phai: ";
	fflush(stdin);
	gets(sv.GIOITINH);
	cout << "Diem trung binh: ";
	cin >> sv.DIEMTB;
}
void xuatsv(sinhvien sv)
{
	cout << sv.MSSV << endl;
	cout << sv.TEN << endl;
	cout << sv.date.ngay <<"/" << sv.date.thang << "/" << sv.date.nam << endl;
	cout << sv.DIACHI << endl;
	cout << sv.GIOITINH<< endl;
	cout << sv.DIEMTB<<"\n"<< endl;	
}
void nhap1Lop(sinhvien sv[], int &n)
{
	cout << "So sinh vien cua lop la:  ";
	cin >> n;
	for(int i=0; i <n;i++){
		cout << "\nSinh vien thu " << i <<endl;
		nhapsv(sv[i]);
		}
}
void xuat1Lop(sinhvien sv[], int n)
{
	for (int i=0;i<n;i++)
		{
		cout << "\nSinh vien thu " << i << endl;
		xuatsv(sv[i]);}
}

int kiemtra(sinhvien sv[], int n)
{
	int dem =0;
	for (int i=0; i < n; i++){
		if (sv[i].DIEMTB >= 5)
			dem++;
	}
	return dem;
}
int main()
{
	sinhvien sv[50];
	int n;
	nhap1Lop(sv,n);
	xuat1Lop(sv,n);
	int kq= kiemtra(sv,n);
	cout << "so hoc sinh len lop la: " << kq;
	return 0;
}
