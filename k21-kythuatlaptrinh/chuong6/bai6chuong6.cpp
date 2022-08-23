#include<iostream>
using namespace std;
int a[100],n;
void nhap();
void day_con_tang();
int main()
{
	nhap();
	day_con_tang();
	return 0;
}
void nhap()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
}
void day_con_tang()
{
	for(int i=0;i<n;i++){
		if(a[i]<a[i+1])
			cout<<a[i]<<" ";
		else if(a[i]>=a[i+1] && a[i]>a[i-1] && i!=0)
			cout<<a[i]<<endl;
	}
}
