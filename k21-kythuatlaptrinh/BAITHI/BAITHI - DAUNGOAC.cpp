#include <iostream>
#include <conio.h>
using namespace std;
/*
Cho một chuỗi S chỉ gồm các ký tự < và > có chiều dài n (n<=1000). Yêu cầu:
Hãy chèn n+1 số nguyên dương vào sao cho ta có bất đẳng thức đúng sao cho số 
nguyên lớn nhất Tmax trong n+1 số này là nhỏ nhất. Viết chương trình nhập vào 
chuỗi S và xuất ra Tmax như trên. Ví dụ: S = ><>< sẽ cho ra bất đẳng thức đúng 
như sau: 2>1<2>1<2. Vậy Tmax=2
*/


int bangso[1002]={0};
void tang1donvi(char a[],int i, int &max)
 {
 	while(a[i]=='>')
 	{
 		while(bangso[i+1]>=bangso[i])
 			bangso[i]++;
 		if(bangso[i]>max)
			max=bangso[i];
		i--;	 	 
	}
 }
 void xuly(char a[])
 {
 	int n=strlen(a);
 	int max=1;
 	bangso[0]=1;
 	for(int i=0;i<n;i++)
 	{
 		int temp=1;
 		if(a[i]=='>')
 		{
 			bangso[i+1]=temp;
 			if(bangso[i+1]>=bangso[i])
 			{
 				tang1donvi(a,i,max);
			 }
		 }
		else if(a[i]=='<')
		{
			while(temp<=bangso[i])
				temp++;
			bangso[i+1]=temp;
			if(temp>max)
				max=temp;
		}
	 }
	 cout<<"Tmax: "<<max<<" \n";
 }
 void xuat(char a[])
 {
 	int n=strlen(a);
 	for(int i=0;i<n;i++)
 	{
 		cout<<bangso[i]<<" "<<a[i]<<" ";
	 }
	 cout<<bangso[n];
 }
int main()
{
	char a[1001];
	cout<<"nhap chuoi: ";
	cin>>a;
	xuly(a);
	xuat(a);
}