#include<iostream>
 
using namespace std;
 
int min(int a, int b){
	if (a<b) return a;
	else return b;
}
 
int main(){
	int n;
	int a[10005], b[10005];
 
	cin>>n;
	for (int i=0;i<n;i++) cin>>a[i];
	for (int i=0;i<n;i++) cin>>b[i];
 
	int Min = b[0]/a[0];
	for (int i=1;i<n;i++) Min = min(Min, b[i]/a[i]);
 
	cout<<Min;
}