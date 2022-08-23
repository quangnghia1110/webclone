#include<iostream>
using namespace std;
//tìm trong mảng tăng dần trả vị trí
int binarySearch(int a[],int n,int x)
{
	int left=0,right=n-1,mid;
	do{
		mid=(left+right)/2;
		if(a[mid]==x)
			return mid;
		if(a[mid]>x)
			right=mid-1;
		else
			left=mid+1;
	}while(left<=right);
	return -1;
}
int main()
{
	int n,a[100],x;
	cin>>n>>x;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int ans=binarySearch(a,n,x);
	cout<<ans;
}