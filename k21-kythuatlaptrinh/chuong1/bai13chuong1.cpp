#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

struct SACH
{
	char MaSSach[30];
	char TenSach[30];
	char TacGia[30];
	int SL;	
};
void nhap(SACH &ss)
{
	cout<<"\n";
	cout<<"Ma so sach la: ";
	fflush(stdin);
	gets(ss.MaSSach);
	cout<<"Ten sach la: ";
	fflush(stdin);
	gets(ss.TenSach);
	cout<<"Ten tac gia la: ";
	fflush(stdin);
	gets(ss.TacGia);
	cout<<"So luong cuon sach cua dau sach la: ";
	cin>>ss.SL;
	
}
void nhapmang(SACH ss[], int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\n";
		cout<<"* Dau sach thu "<< i<< " *" ;
		nhap(ss[i]);
	}
}
void xuat(SACH ss)
{
	cout<<"\n";
	cout<<"Ma so sach vua nhap la: "<<ss.MaSSach;
	cout<<"\n";
	cout<<"Ten sach vua nhap la: "<<ss.TenSach;
	cout<<"\n";
	cout<<"Ten tac gia vua nhap la: "<<ss.TacGia;
	cout<<"\n";
	cout<<"So luong cac cuon sach cua dau sach vua nhap la: "<<ss.SL;
	cout<<"\n";
	
}
void xuatmang(SACH ss[], int n)
{
	
	for(int i=0;i<n;i++)
	{
		cout<<"\n";
		cout<<"* Thong tin dau sach thu "<<i <<" *";
		xuat(ss[i]);
	}
}
void xuatsl(SACH ss)
{
	cout<<"\n";
	cout<<ss.SL;
}
void timsach(SACH ss[],int n,char TenSach		[]){
    int i;
    for(i=0;i<n;++i){
       if(strcmp(ss[i].TenSach,TenSach)==0){
           	
           	cout<<"* Thong tin sach thu "<<i;
       		xuat(ss[i]);
     		
       }
	}
	


}
int tong(SACH ss[], int n)
{
	int max=ss[0].SL;

	for (int i = 1; i < n; i++)
 	{
	 	if(ss[i].SL>max)
	 	{
	 		max=ss[i].SL+max;
	 	
	 	}
	 }
	 return max;
}
int main()
{
	SACH ss[100],ss1,ss2,S;
	int n,i,tongsach;
	char tim[30];
	cout<<"*** NHAP SO LUONG DAU SACH ***";
	cout<<"\n";
	cin>>n;
	cout<<"\n";
	cout<<"*** NHAP THONG TIN DAU SACH ***";
	nhapmang(ss,n);
	cout<<"\n";
	cout<<"*** XUAT THONG TIN DAU SACH ***";
	xuatmang(ss,n);
	cout<<"\n";
	cout<<"*** TIM TEN SACH ***";
	cout<<"\n";
	fflush(stdin);
	gets(tim);
	timsach(ss,n,tim);
	cout<<"\n";
	cout<<"*** TONG SO LUONG SACH LA ";
	tongsach=tong(ss,n);
	cout<<tongsach;
	cout<<" ***";
	cout<<"\n";

	

	
}
