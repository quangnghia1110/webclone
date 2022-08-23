#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
struct PHANSO
{
	int tu;
	int mau;	
};

void nhap(PHANSO &ps)
{
	cout << "Nhap tu: ";
 	cin >> ps.tu;
	cout << "Nhap mau: "; 
	cin >> ps.mau;
}
void xuat(PHANSO ps)
{

		cout << ps.tu << "/" << ps.mau;
		
	
}
void nhapmang(PHANSO ps[],int &n)
{
	
	 
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap vao phan tu thu "<<i; 
		cout<<"\n";
  		nhap(ps[i]);
		cout<<"\n";
	}
}
void xuatmang(PHANSO ps[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Phan so cua phan tu thu "<<i<<" la ";
		cout<<"\n";
		xuat(ps[i]);
		cout<<"\n";	
	}
}
void Xuatmang(PHANSO ps[],int n)
{
	for(int i=0;i<n;i++)
	{
		xuat(ps[i]);
		cout<<"\n";	
	}
}
int uc(int a, int b)
{
	a=abs(a);
	b=abs(b);
	while(a*b!=0)
		if(a>=b)
			a=a%b;
		else
			b=b%a;
	return a+b;
}
int rutgon(PHANSO &ps)
{
	int x=uc(ps.tu,ps.mau);
	ps.tu=ps.tu/x;
	ps.mau=ps.mau/x;
	if(ps.tu<0)
	ps.tu=-ps.tu;
	ps.mau=-ps.mau;
	
}

PHANSO tong(PHANSO ps1, PHANSO ps2) {
	PHANSO temp;
	temp.tu = ps1.tu*ps2.mau + ps2.tu*ps1.mau;
	temp.mau = ps1.mau*ps2.mau;
	rutgon(temp);
	return temp;
}
PHANSO mangtong(PHANSO ps[50], int &n)
{
	PHANSO S=ps[0];
	
	for(int i=1; i<n; i++)
	{
		S=tong(S,ps[i]);
		
	}
	return S;

	
}
PHANSO timmax(PHANSO ps[], int n)
{
	int x,y;
	PHANSO max=ps[0];
	for( int i=1;i<n;i++)
	{
		x=max.tu*ps[i].mau;
		y=ps[i].tu*max.mau;
		if(x<y)
		{
			max=ps[i];
		}
	}
	return max;
}
PHANSO timmin(PHANSO ps[], int n)
{
	int x,y;
	PHANSO min=ps[0];
	for( int i=1;i<n;i++)
	{
		x=min.tu*ps[i].mau;
		y=ps[i].tu*min.mau;
		if(x>y)
		{
			min=ps[i];
		}
	}
	return min;
}
PHANSO tangdan(PHANSO ps[], int n)
{
	PHANSO temp;
 	for(int i = 0; i < n - 1; i++)
	{
        for(int j = i + 1; j < n; j++)
		{
			if(ps[i].tu>ps[j].tu)
			{
				temp=ps[i];
				ps[i]=ps[j];
				ps[j]=temp;
			}
		}
	}
			
}
int main()
{
	PHANSO ps1,ps2,ps[100],S,P,max,min;
	int n,i;
	
	cout<<"*** Nhap so luong cac phan so ***";  
	cout<<"\nNhap n:";
	cin>>n;
	cout<<"*** Nhap mang cac phan so ****";  
	cout<<"\n";
	nhapmang(ps,n);
	cout<<"\n";
	cout<<"*** Xuat mang cac phan so ****";  
	cout<<"\n";
	xuatmang(ps,n);
	cout<<"\n";
	
	
	S=mangtong(ps,n);
	cout<<"*** Tong mang cac phan so ****";  
	cout<<"\n";
	xuat(S);
	cout<<"\n";
	
	max=timmax(ps,n);
	cout<<"*** Phan so co gia tri lon nhat trong mang ****";  
	cout<<"\n";
	xuat(max);
	cout<<"\n";
	
	min=timmin(ps,n);
	cout<<"*** Phan so co gia tri lon nhat trong mang ****";  
	cout<<"\n";
	xuat(min);
	cout<<"\n";
	
	tangdan(ps,n);
	cout<<"*** Phan so tang dan trong mang ****";  
	cout<<"\n";
	Xuatmang(ps,n);
	cout<<"\n";
	


	
	
}