#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

struct MAYTINH
{
	char LOAI[30];
	char NSX[30];
	float BAOHANH;	
};
void nhap(MAYTINH &mt)
{
	cout<<"\n";
	cout<<"Loai may la: ";
	fflush(stdin);
	gets(mt.LOAI);
	cout<<"Noi san xuat la: ";
	fflush(stdin);
	gets(mt.NSX);
	cout<<"Thoi gian bao hanh la: ";
	cin>>mt.BAOHANH;
	
	
}
void nhapmang(MAYTINH mt[], int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\n";
		cout<<"* May tinh thu "<< i<< " *" ;
		nhap(mt[i]);
	}
}
void xuat(MAYTINH mt)
{
	cout<<"\n";
	cout<<"Loai may vua nhap la: "<<mt.LOAI;
	cout<<"\n";
	cout<<"Ngay san xuat vua nhap la: "<<mt.NSX;
	cout<<"\n";
	cout<<"Thoi gian bao hanh vua nhap la: "<<mt.BAOHANH;
	cout<<"\n";
	
}
void xuatmt( MAYTINH mt)
{
	cout<<"\n";
}
void xuatmang(MAYTINH mt[], int n)
{
	
	for(int i=0;i<n;i++)
	{
		cout<<"\n";
		cout<<" May tinh thu "<<i <<" ,";
		xuatmt(mt[i]);
	}
}

int thongke(MAYTINH mt[],int n)
{
    int dem=0;
    for(int i=0;i<n;++i)
	{
        
			if(mt[i].BAOHANH>=1)
			{
				dem++;
			}	
	}
	return dem;
}
void timmay(MAYTINH mt[], int n, char NSX[])
{
	for( int i=0;i<n;i++)
	{
		if(strcmp(mt[i].NSX,NSX)==0)
		{
			cout<<"May tinh thu "<<i;
			xuatmt(mt[i]);
		
		}
	}
}
int main()
{
	MAYTINH mt[100];
	int n,i,kq;
	char tim[30];
	cout<<"*** NHAP SO LUONG MAY TINH ***";
	cout<<"\n";
	cin>>n;
	cout<<"\n";
	cout<<"*** NHAP THONG TIN MAY TINH ***";
	nhapmang(mt,n);
	cout<<"\n";
	cout<<"*** THONG KE THOI GIAN BAO HANH MAY TINH L***";
	kq=thongke(mt,n);
	cout<<"\n";
	cout<<kq;
	cout<<"\n";
	cout<<"*** TIM CAC MAY TINH ***";
	cout<<"\n";
	fflush(stdin);
	gets(tim);
	timmay(mt,n,tim);
	

	

	
}
