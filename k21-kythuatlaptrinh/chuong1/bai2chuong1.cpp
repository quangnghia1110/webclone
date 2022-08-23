#include<iostream>
#include<string.h>
#include <math.h>
using namespace std;
struct PHANSO
{
	int tu;
	int mau;	
};
void nhap(PHANSO &ps)
{
 	cin >> ps.tu;
	cin >> ps.mau;
}

void NhapMangPhanSo(PHANSO ps[],int &n)
{
	cin>>n;  
	for(int i=0;i<n;i++)
	{
  	nhap(ps[i]);
		
	}
}

PHANSO timmax(PHANSO ps[], int n)
{
	int x,y;
	for( int  i=1;i<n;i++)
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
void xuat(PHANSO ps[],int n)
{
	for(int i=0;i<n;i++)
		if(timmax(ps,n))
			cout<<i;
	
}     
int main()
{
	PHANSO ps[50],S,P,max;
	PHANSO ps1,ps2;
	int n,i;
	NhapMangPhanSo(ps,n);

 	
 	max=timmax(ps,n);
	xuat(max);

}











