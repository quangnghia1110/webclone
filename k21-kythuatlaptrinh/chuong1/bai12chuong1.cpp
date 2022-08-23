#include<iostream>
#include<string.h>
using namespace std;

struct VIDEO
{
	char TENPHIM[30];
	char theloai[30];
	char TENDAODIEN[30];
	char TENNAM[30];
	char TENNU[30];
 	char NAMSX[4];
	char HSX[30];		
};
void nhap(VIDEO &vd)
{
	cout<<"\n";
	cout<<"Ten phim la: ";
	fflush(stdin);
	gets(vd.TENPHIM);
	cout<<"The loai phim la: ";
	fflush(stdin);
	gets(vd.theloai);
	cout<<"Ten dao dien la: ";
	fflush(stdin);
	gets(vd.TENDAODIEN);
	cout<<"Ten dien vien nam la: ";
	fflush(stdin);
	gets(vd.TENNAM);
	cout<<"Ten dien vien nu la: ";
	fflush(stdin);
	gets(vd.TENNU);
	cout<<"Nam san xuat phim la: ";
	fflush(stdin);
	gets(vd.NAMSX);
	cout<<"Hang san xuat phim la: ";
	fflush(stdin);
	gets(vd.HSX);
	
}
void nhapmang(VIDEO vd[], int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\n";
		cout<<"* Bo phim thu "<< i<< " *" ;
		nhap(vd[i]);
	}
}
void xuat(VIDEO vd)
{
	cout<<"\n";
	cout<<"Ten phim vua nhap la: "<<vd.TENPHIM;
	cout<<"\n";
	cout<<"The loai phim vua nhap la: "<<vd.theloai;
	cout<<"\n";
	cout<<"Ten dao dien vua nhap la: "<<vd.TENDAODIEN;
	cout<<"\n";
	cout<<"Ten dien vien nam chinh vua nhap la: "<<vd.TENNAM;
	cout<<"\n";
	cout<<"Ten dien vien nu chinh vua nhap la: "<<vd.TENNU;
	cout<<"\n";
	cout<<"Nam san xuat phim vua nhap la: "<<vd.NAMSX;
	cout<<"\n";
	cout<<"Hang san xuat nam vua nhap la: "<<vd.HSX;
	cout<<"\n";
	
}
void xuatmang(VIDEO vd[], int n)
{
	
	for(int i=0;i<n;i++)
	{
		cout<<"\n";
		cout<<"* Thong tin bo phim thu "<<i <<" *";
		xuat(vd[i]);
	}
}
void xuattenphim(VIDEO vd)
{
	cout<<vd.TENPHIM;
	cout<<".";

}
void timtheloai(VIDEO vd[],int n,char theloai[]){
    int i;
    for(i=0;i<n;++i){
       if(strcmp(vd[i].theloai,theloai)==0){
           	
       		xuattenphim(vd[i]);
	   }
    }
}
void timtennam(VIDEO vd[],int n,char TENNAM	[]){
    int i;
    for(i=0;i<n;++i){
       if(strcmp(vd[i].TENNAM,TENNAM)==0){
           	
       		xuattenphim(vd[i]);
	   }
    }
}
void timdaoien(VIDEO vd[],int n,char TENDAODIEN	[]){
    int i;
    for(i=0;i<n;++i){
       if(strcmp(vd[i].TENDAODIEN,TENDAODIEN)==0){
           	
       		xuattenphim(vd[i]);
	   }
    }
}
int main()
{
	VIDEO vd[100];
	int n,i;
	char tim[30];
	cout<<"*** NHAP SO LUONG CAC BO PHIM ***";
	cout<<"\n";
	cin>>n;
	cout<<"\n";
	cout<<"*** NHAP THONG TIN PHIM ***";
	nhapmang(vd,n);
	cout<<"\n";
	cout<<"*** XUAT THONG TIN PHIM ***";
	xuatmang(vd,n);
	cout<<"\n";
	cout<<"*** TIM TEN PHIM CUNG THE LOAI ***";
	cout<<"\n";
	fflush(stdin);
	gets(tim);
	timtheloai(vd,n,tim);
	cout<<"\n";
	cout<<"*** TIM TEN PHIM CO CUNG DIEN VIEN NAM ***";
	cout<<"\n";
	fflush(stdin);
	gets(tim);
	timtennam(vd,n,tim);
	cout<<"\n";
	cout<<"*** TIM TEN PHIM CO CUNG DAO DIEN ***";
	cout<<"\n";
	fflush(stdin);
	gets(tim);
	timdaoien(vd,n,tim);
}
