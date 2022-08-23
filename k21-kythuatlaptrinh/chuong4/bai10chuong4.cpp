#include<iostream>
using namespace std;
void nhapmang(int a[], int &n)
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int tansuat(int a[],int n)
{
	int max=0;
	int dem=1;
	for(int i=0;i<n;i++)
	{
		if(a[i]==a[i+1])
		{
			dem++;
			if(dem>max)
			{
				max=dem;
			}		
		}
		else
		{	
           dem=1;
		}
	}
	return dem;

}
int main()
{
	int n;
	int a[101];
	nhapmang(a,n);
	int kq=tansuat(a,n);
	cout<<kq;
}