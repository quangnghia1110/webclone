#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
void heapiFy(int a[],int n,int index)
{
	int tmp=a[index],max,left,mid,right;
	for(int i=index;;index=i){
		left=index*3+1;
		mid=index*3+2;
		right=index*3+3;
		max=tmp;
		if(left<n&&max<a[left]){
			i=left;
			max=a[left];
		}
		if(mid<n&&max<a[mid]){
			i=mid;
			max=a[mid];
		}
		if(right<n&&max<a[right]){
			i=right;
		}
		if(i==index){
			a[i]=tmp;
			break;
		}
		else	
			a[index]=a[i];
	}
}
void heapSort(int a[],int n)
{
	for(int i=(n-2)/3;i>=0;i--)
		heapiFy(a,n,i);
	for(int i=n-1;i>0;i--){
		swap(a[0],a[i]);
		heapiFy(a,i,0);
	}
}
int main()
{
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
		cin>>a[i];
	heapSort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
}
