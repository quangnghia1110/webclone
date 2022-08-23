#include<iostream>
using namespace std;
int a[100]={0},n,tg[100],b[100],m;
void nhap();
void day_con_tang();
int main()
{
	nhap();
	day_con_tang();
	for(int i=0;i<m;i++)
		cout<<b[i]<<" ";
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
	int k=0,sum=0,tong=0;
	for(int i=0;i<n;i++){
		if(a[i]<a[i+1]){
			tg[k]=a[i];
			sum+=tg[k];
			k++;
		}
		else if(a[i]>=a[i+1] && a[i]>a[i-1] && i!=0)
		{
			tg[k]=a[i];
			sum+=tg[k];
			k++;
			if(sum>=tong){
				tong=sum;
				m=k;
				for(int j=0;j<m;j++)
					b[j]=tg[j];
				k=0;
				sum=0;
			}
		}
	}
}
