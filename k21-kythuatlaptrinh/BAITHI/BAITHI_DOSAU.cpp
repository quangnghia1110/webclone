#include<iostream>
using namespace std;
void xuat() ;
int tinhdosau();
void lietkenp(int k);
int m,n;
int a[100];
int main()
{
	cin>>m>>n;
	lietkenp(0);
void lietkenp(int k)
{
	if(k==m)
	{
		if(tinhdosau()==n)
			xuat();
	}
	else
		for(int i=0;i<=1;i++)
		{
			a[k]=i;
			lietkenp(k+1);
		}	
}
void xuat() 
{
	for(int i=0;i<m;i++)
		if(a[i]==0)
			cout<<'(';
		else cout<<')';
	cout<<endl;
}

int tinhdosau()
{
	int i=0;
	int ngoacmo=0;
	int dosau=0;
	while(i<m)
	{
		if(a[i]==0)
			ngoacmo++;
		else
		{
			if(ngoacmo==0)
				return -1;
			if(ngoacmo>dosau)
				dosau=ngoacmo;
			ngoacmo--;			
		}
		i++;
	}
	if(ngoacmo==0)
		return dosau;
	else
		return -1;
}

