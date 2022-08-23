#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

struct HANG
{
	char MAHANG[30];
	char TEN[30];
	int SL;	
	float GIA;
	int SLT;
	int BAOHANH;
	
};
void nhap(HANG &mh)
{
	cout<<"\n";
	cout<<"Ma hang la: ";
	fflush(stdin);
	gets(mh.MAHANG);
	cout<<"Ten mat hang la: ";
	fflush(stdin);
	gets(mh.TEN);
	cout<<"So luong mat hang la: ";
	cin>>mh.SL;
	cout<<"Gia cua mat hang la: ";
	cin>>mh.GIA;
	cout<<"So luong mat hang ton kho la: ";
	cin>>mh.SLT;
	cout<<"Thoi gian bao hanh cua mat hang la: ";
	cin>>mh.BAOHANH;
	cout<<"\n";
	
}
void nhapmang(HANG mh[], int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\n";
		cout<<"* Mat hang thu "<< i<< " *" ;
		nhap(mh[i]);
	}
}
void xuat(HANG mh)
{
	cout<<"\n";
	cout<<"Ma hang vua nhap la: "<<mh.MAHANG;
	cout<<"\n";
	cout<<"Ten mat hang vua nhap la: "<<mh.TEN;
	cout<<"\n";
	cout<<"So luong mat hang vua nhap la: "<<mh.SL;
	cout<<"\n";
	cout<<"Gia cua mat hang vua nhap la: "<<mh.GIA;
	cout<<"\n";
	cout<<"So luong ton cua mat hang vua nhap la: "<<mh.SLT;
	cout<<"\n";
	cout<<"Thoi gian bao hanh cua mat hang vua nhap la: "<<mh.BAOHANH;
	cout<<"\n";
	
	
}
void xuatmang(HANG mh[], int n)
{
	
	for(int i=0;i<n;i++)
	{
		cout<<"\n";
		cout<<"* Thong tin mat hang thu "<<i <<" *";
		xuat(mh[i]);
	}
}
void xuattenmh(HANG mh)
{
	cout<<"\n";
}
void xuatten(HANG mh)
{
	cout<<mh.TEN;
}
void xuatmh(HANG mh[], int n)
{
	
	for(int i=0;i<n;i++)
	{
		
		cout<<"Mat hang thu "<<i ;
		xuattenmh(mh[i]);
	}
}


HANG maxSLT(HANG mh[],int n)
{
	int max=mh[0].SLT;
	int temp=0;
	for(int i=0;i<n;i++)
	{
		if(mh[i].SLT>max)
		{
			max=mh[i].SLT;
			temp=i;
		}
		
	}
	return mh[temp];
}
HANG minSLT(HANG mh[],int n)
{
	int min=mh[0].SLT;
	int temp=0;
	for(int i=0;i<n;i++)
	{
		if(mh[i].SLT<min)
		{
			
			min=mh[i].SLT;
			temp=i;
		}
	
	}
	return mh[temp];
}
HANG maxGIA(HANG mh[],int n)
{
	int maxx=mh[0].GIA;
	int temp=0;
	for(int i=0;i<n;i++)
	{
		if(mh[i].GIA>maxx)
		{	
	
			maxx=mh[i].GIA;
			temp=i;
		}
	}
	return mh[temp];
}
int thongke(HANG mh[],int n)
{
    for(int i=0;i<n;++i)
	{
        
			if(mh[i].BAOHANH>=12)
			{
				cout<<" Mat hang thu "<<i;
				cout<<"\n";
			}	
	}
}
HANG tangdan(HANG mh[],int n)
{
	HANG temp;
	for(int i = 0; i < n - 1; i++)
	{
        for(int j = i + 1; j < n; j++)
		{
			if(mh[i].SLT>mh[j].SLT)
			{
				temp=mh[i];
				mh[i]=mh[j];
				mh[j]=temp;
			}
		}
	}
}
int main()
{
	HANG mh[100],MAXSLT,MINSLT,MAXGIA;
	int n,i;
	char tim[30];
	cout<<"*** NHAP SO LUONG MAT HANG ***";
	cout<<"\n";
	cin>>n;
	cout<<"\n";
	cout<<"*** NHAP THONG TIN MAT HANG ***";
	nhapmang(mh,n);
	cout<<"*** XUAT THONG TIN MAT HANG ***";
	xuatmang(mh,n);
	cout<<"\n";
	cout<<"*** MAT HANG CO SO LUON TON NHIEU NHAT LA ";
	MAXSLT=maxSLT(mh,n);
	xuatten(MAXSLT);
	cout<<" ***";
	
	cout<<"\n";
	cout<<"*** MAT HANG CO SO LUON TON IT NHAT LA ";
	MINSLT=minSLT(mh,n);
	xuatten(MINSLT);
	cout<<" ***";
	
	cout<<"\n";
	cout<<"*** MAT HANG CO GIA CAO NHAT LA ";
	MAXGIA=maxGIA(mh,n);
	xuatten(MAXGIA);
	cout<<" ***";
	
	cout<<"\n";
	cout<<"* NHUNG MAT HANG CO THOI GIAN BAO HANH LON HON 12 THANG *";
	cout<<"\n";
	thongke(mh,n);
	cout<<"\n";
	cout<<"* CAC MAT HANG CO SO LUONG TON TANG DAN";
	cout<<"\n";
	tangdan(mh,n);
	xuatmh(mh,n);
	cout<<"\n";
	

	
	

	

	
}
