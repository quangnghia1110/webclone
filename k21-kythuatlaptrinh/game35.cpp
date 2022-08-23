#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int a[100][100];
void xuLy(int a[100][100],int row, int col, int m, int n);
void sinhBangPhuongAn(int a[100][100], int m, int n);
void nguoiDi(int &tong, int &pre, bool &ketthuc, int m, int n);
void mayDi(int a[100][100], int &tong, int &pre, bool &ketthuc, int level, int m, int n);
void mayChonNgauNhien(int &temp, int pre, int n);
void maychoi(int a[100][100], int tong, int &temp, int pre, int n);
void chonSo(int &m, int &n);
int main()
{   
	int tong = 0;
	int pre = 0;
	int m, n;
	chonSo(m, n);
	sinhBangPhuongAn(a, m, n);
	int choice;
	cout<< "MOI BAN CHON CHE DO: \n";
	cout << "1.BAN DI TRUOC\n";
	cout << "2.MAY DI TRUOC\n";
	cout << "Nhap lua chon vao(1-2): ";
	cin >> choice;
	system("cls");
	
	int level;
	cout << "MOI BAN CHON CAP DO: \n";
	cout << "1.MUC DO DE\n";
	cout << "2.MUC DO TRUNG BINH\n";
	cout << "3.MUC DO KHO\n";
	cin >> level;
	system("cls");
	
	bool ketthuc = false;
	if(choice == 2)
	{
		mayDi(a, tong, pre, ketthuc, level, m, n);
	}
	while(ketthuc == false)
	{
		nguoiDi(tong, pre, ketthuc, m, n);
		if(ketthuc)
		{
			break;
		}
		mayDi(a, tong, pre, ketthuc, level, m, n);
	}
	return 0;
}
void chonSo(int &m, int &n)
{
	cout << "Moi ban chon tong max cho tro choi.VD(35): ";
	cin >> m;
	cout << "Moi ban chon so chon lon nhat.VD(5): ";
	cin >> n;
	system("cls");
}
void xuLy(int a[100][100],int row, int col, int m, int n)
{
	bool b = true;
	for(int i=1; i<=n; i++)
	{
		if( row + col > m || (a[row + col][i] == 1 && i != col))
		{
			b = false;
			break;
		}
	}
	if(b)
	{
		a[row][col] = 1;
	}
}
void sinhBangPhuongAn(int a[100][100], int m, int n)
{
	// Tao mang co cac gia tri bang 0;
	for(int i=0; i<=m; i++)
	{
		for(int j=0; j<=n; j++)
		{
			a[i][j] = 0;
		}
	}
	// Tao bang phuong an;
	for(int i=m; i>=0; i--)
	{
		for(int j=1; j <= n; j++)
		{
			xuLy(a, i, j, m, n);
		}
	}
	a[1][1] = 0; // gan lai gia tri cho a[1][1];
}
void nguoiDi(int &tong, int &pre, bool &ketthuc, int m, int n)
{
	int temp;
	cout << "Moi ban nhap so (1->" << n << ") vao: "; 
	cin >> temp;
	while(temp < 1 || temp > n || temp == pre)
	{
		cout << "So vua nhap khong thoa man moi ban nhap lai: ";
		cin >> temp;
	}
	system("cls");
	tong += temp;
	pre = temp;
	cout << "tong(ban) = " << tong << endl;
	if(tong > m)
	{
		cout << "Ban da thua cuoc" << endl;
		ketthuc = true;
	}
}
void maychoi(int a[100][100], int tong, int &temp, int pre, int n)
{   srand((unsigned)time(NULL));
	int i = 1;
	while((i == pre || a[tong][i] == 0) && i <= n)
	{
		i++;
	}
	if(i > n)
	{
		do
		{
			temp = rand()%(n) + 1;
		}
		while(temp == pre);
	}
	else 
	{
		temp = i;
	}
}
void mayChonNgauNhien(int &temp, int pre, int n)
{
	srand((unsigned)time(NULL));
	do
	{
		temp = rand()%(n) + 1;
	}
	while(temp == pre);
}
void mayDi(int a[100][100], int &tong, int &pre, bool &ketthuc, int level, int m, int n)
{
	int temp;
	if(level == 1) // cap do: de
    {
		if(tong >= 2*m/3)
		{
			maychoi(a, tong, temp, pre, n);
		}
		else 
		{
			mayChonNgauNhien(temp, pre, n);
		}
	}
	if(level == 2) // cap do: trung binh
	{
		if(tong >= m/2)
		{
			maychoi(a, tong, temp, pre, n);
		}
		else
		{
			mayChonNgauNhien(temp, pre, n);
		}
	}
	if(level == 3) // cap do: kho
	{
	   maychoi(a, tong, temp, pre, n);
	}
	tong += temp;
	pre = temp;
	cout << "tong(may) =  " << tong <<endl;
	if(tong > m)
	{
		cout << "Ban da thang !!!" << endl;
		ketthuc = true;
	}
}