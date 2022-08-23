#include<iostream>
using namespace std;
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
int GTNN(int a[],int n){
	int min=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<min) 
			min=a[i];
	}
	return min;
}

bool kt(int a[],int n,int x){
	for(int i=0;i<n;i++){
		if(a[i]%x!=0) 
			return false;
	}
	return true;
}
int UCLN(int a[],int n){
	for(int i=GTNN(a,n);i>=1;i--){
		if(kt(a,n,i)==true) 
			return i;
	}
	return -1;
}

int main()
{
	int a[100],n;
	cin>>n;
	nhap(a,n);
	cout<<UCLN(a,n);
	return 0;
}