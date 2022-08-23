#include<iostream>
using namespace std;
void insertionSort(int a[],int n)
{
	
	for(int i=1;i<n;i++)
	{
		int t=a[i];
		int j=i-1;
		while(j>=0&&t<a[j]){
		a[j+1]=a[j];
		j--;
		}
		a[j+1]=t;
	}

}
int main(){
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
		cin>>a[i];
	insertionSort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
}