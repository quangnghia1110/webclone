#include<iostream>
using namespace std;
bool nguyento(int n,int i)
{
	if(n<2) return false;
	if(i>=n) return true;
	if(n%i==0) return false;
	return nguyento(n,i+1);
}
bool kiemtra(int n)
{
	return nguyento(n,2);
}
int main()
{
	int n;
	cin>>n;
	int kq=kiemtra(n);
	cout<<kq;
}