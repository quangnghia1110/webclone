#include<iostream>
#include<string.h>
using namespace std;
struct TUOI
{
	int ngay;
	int thang;
	int nam;	
};
struct SINHVIEN
{
	char TEN[30];
	char MSSV[8];
	char tensvtim[30];
	TUOI ngaysinh;
	float toan,ly,hoa,dtb;	
};
void nhap(SINHVIEN &sv)
{
	cout<<"\n";
	cout<<"Ten sinh vien la: ";
	fflush(stdin);
	gets(sv.TEN);
	cout<<"Mssv sinh vien la: ";
	fflush(stdin);
	gets(sv.MSSV);
	cout<<"Ngay sinh cua sinh vien la: ";
	cin>>sv.ngaysinh.ngay;
	cout<<"Thang sinh cua sinh vien la: ";
	cin>>sv.ngaysinh.thang;
	cout<<"Nam sinh cua sinh vien la: ";
	cin>>sv.ngaysinh.nam;
	cout<<"Diem mon toan cua sinh vien la: ";
	cin>>sv.toan;
	cout<<"Diem mon ly cua sinh vien la: ";
	cin>>sv.ly;
	cout<<"Diem mon hoa cua sinh vien la: ";
	cin>>sv.hoa;
	cout<<"\n";
}
void nhapmang(SINHVIEN sv[], int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"* Sinh vien thu "<< i<< " *" ;
		nhap(sv[i]);
	}
}
void xuat(SINHVIEN sv)
{
	cout<<"\n";
	cout<<"Ten sinh vien vua nhap la "<<sv.TEN<<endl;	
	cout<<"Mssv sinh vien vua nhap la "<<sv.MSSV<<endl;
	cout<<"Ngay thang nam sinh cua sinh vien vua nhap la "<<sv.ngaysinh.ngay<<"/"<<sv.ngaysinh.thang<<"/"<<sv.ngaysinh.nam<<endl;
	cout<<"Diem mon toan cua sinh vien vua nhap la "<<sv.toan<<endl;
	cout<<"Diem mon ly cua sinh vien vua nhap la "<<sv.ly<<endl;
	cout<<"Diem mon hoa cua sinh vien vua nhap la "<<sv.hoa<<endl;	
}
void xuatmang(SINHVIEN sv[], int n)
{
	
	for(int i=0;i<n;i++)
	{
		cout<<"* Sinh vien thu "<<i <<" *";
		xuat(sv[i]);
	}
}
void xuatten(SINHVIEN sv)
{
	cout<<sv.TEN;
}
void xuattentheomang(SINHVIEN sv[], int n)
{
	for(int i=0;i<n;i++)
	{
		xuatten(sv[i]);
		cout<<",";
	}
	
}
void tinhdtb(SINHVIEN &sv)
{
	sv.dtb=(sv.toan+sv.ly+sv.hoa)*1.0/3;
}
int diemtb(SINHVIEN sv[], int n)
{
	
	for( int i=0;i<n;i++)
	{
		tinhdtb(sv[i]);tinhdtb(sv[i]);
		cout<<"Diem trung binh cua sinh vien "<<sv[i].TEN<<" la "<<sv[i].dtb;
		
		cout<<"\n";
	}
}
SINHVIEN diemtbmax(SINHVIEN sv[], int n)
{
	int temp=0;
	float max=((sv[0].toan+sv[0].ly+sv[0].hoa)/3);
	for(int i=1;i<n;i++)
	{
		if(((sv[i].toan+sv[i].ly+sv[i].hoa)/3)>max)
		{
			max=((sv[i].toan+sv[i].ly+sv[i].hoa)/3);
			temp=i;
		}
	}
	return sv[temp];

}
SINHVIEN tangdan(SINHVIEN sv[], int n)
{
	SINHVIEN temp;
 	for(int i = 0; i < n ; i++)
	{
        for(int j = i + 1; j < n; j++)
		{
			if(sv[i].dtb>sv[j].dtb)
			{
				temp=sv[i];
				sv[i]=sv[j];
				sv[j]=temp;
			}
		}
	}
			
}
SINHVIEN giamdantoan(SINHVIEN sv[], int n)
{
	SINHVIEN temp;
 	for(int i = 0; i < n ; i++)
	{
        for(int j = i + 1; j < n; j++)
		{
			if(sv[i].toan<sv[j].toan)
			{
				temp=sv[j];
				sv[j]=sv[i];
				sv[i]=temp;
			}
		}
	}
			
}
SINHVIEN kiemtratuoi(SINHVIEN sv[], int n)
{
   SINHVIEN svMax; // de tuoi lon nhat thi nam sinh phai nho nhat
   svMax.ngaysinh.nam = INT_MAX;
   for(int i=0; i<n; i++)
   {
   	  if(sv[i].ngaysinh.nam < svMax.ngaysinh.nam) // tim nam sinh nho nhat
   	  {
   	  	svMax = sv[i];
   	   }
   	}
    for(int i=0; i<n; i++)
   	{
   		if(sv[i].ngaysinh.nam == svMax.ngaysinh.nam && sv[i].ngaysinh.thang < svMax.ngaysinh.thang) // tim thang sinh nho nhat trong nhung sv co cung nam sinh nho nhat
   		{
   			svMax = sv[i];
   		}
   	}
    for(int i=0; i<n; i++)
   	{
   		if(sv[i].ngaysinh.nam == svMax.ngaysinh.nam && sv[i].ngaysinh.thang == svMax.ngaysinh.thang && sv[i].ngaysinh.ngay < svMax.ngaysinh.ngay) // tim ngay sinh nho nhat trong nhung sv co cung nam sinh va thang sinh nho nhat
   		{
   			svMax = sv[i];
   		}
   	}
   	return svMax;
}
void timdiem(SINHVIEN sv[], int n,float dtb)
{
	for(int i=0;i<n;++i)
	{
		if(sv[i].dtb>5&&sv[i].toan>=3&&sv[i].ly>=3&&sv[i].hoa>=3)
		{
			cout<<"Sinh vien co diem trung binh lon hon 5 va cac mon khong nho hon 3 la ";
			xuatten(sv[i]);
			cout<<"\n";
		}
	}
}
void timsv(SINHVIEN sv[],int n,char TEN[]){
    int i;
    for(i=0;i<n;++i){
       if(strcmp(sv[i].TEN,TEN)==0){
           cout<<"Ten sinh vien la "<<sv[i].TEN<<endl;	
			cout<<"Mssv sinh vien la "<<sv[i].MSSV<<endl;
			cout<<"Ngay thang nam sinh cua sinh vien la "<<sv[i].ngaysinh.ngay<<"/"<<sv[i].ngaysinh.thang<<"/"<<sv[i].ngaysinh.nam<<endl;
			cout<<"Diem mon toan cua sinh vien la "<<sv[i].toan<<endl;
			cout<<"Diem mon ly cua sinh vien la "<<sv[i].ly<<endl;
			cout<<"Diem mon hoa cua sinh vien la "<<sv[i].hoa<<endl;
			cout<<"Diem trung binh cua sinh vien la "<<sv[i].dtb<<endl;		
       		
	   }
    }
}
int main()
{
	SINHVIEN sv[100],MAX,sv1,sv2,kt;
	int n,i;
	float dtb;
	char tensvtim[30];
	cout<<"*** NHAP SO LUONG SINH VIEN ***";
	cout<<"\n";
	cin>>n;
	cout<<"\n";
	cout<<"*** NHAP THONG TIN CUA SINH VIEN ***";
	cout<<"\n";
	nhapmang(sv,n);
	cout<<"*** XUAT THONG TIN CUA SINH VIEN ***";
	cout<<"\n";
	xuatmang(sv,n);
	cout<<"*** DIEM TRUNG BINH CUA SINH VIEN ***";
	cout<<"\n";
	diemtb(sv,n);
	MAX=diemtbmax(sv,n);
	cout<<"Sinh vien co diem trung binh cao nhat la ";
	xuatten(MAX);
	cout<<"\n";
	tangdan(sv,n);
	cout<<"*** Diem sinh vien tang dan trong lop ****";  
	cout<<"\n";
	xuattentheomang(sv,n);
	cout<<"\n";
	giamdantoan(sv,n);
	cout<<"*** Diem sinh vien giam dan theo mon toan trong lop ****";  
	cout<<"\n";
	xuattentheomang(sv,n);
	cout<<"\n";
	cout<<"*** Sinh vien lon tuoi nhat trong lop ****";  
	cout<<"\n";
    kt=kiemtratuoi(sv,n);
	xuatten(kt);
	cout<<"\n";
	cout<<"*** Tim yeu cau diem sinh vien trong lop ****"; 
	cout<<"\n";
	timdiem(sv,n,dtb);
	cout<<"\n";
	cout<<"*** Tim thong tin sinh vien trong lop ****"; 
	cout<<"\n";
	cout<<"Nhap ten sinh vien can tim: ";
	fflush(stdin);
	gets(tensvtim);
	timsv(sv,n,tensvtim);	
}

	
	
