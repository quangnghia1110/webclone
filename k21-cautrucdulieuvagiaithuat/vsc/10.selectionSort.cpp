#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
void selectionSort(int a[],int n)
{
	for(int j=0;j<n;j++)
	{
		int min=j;
		for(int i=j+1;i<n;i++)
		{
			if(a[i]<a[min])
			{
				min=i;
			}
		}
			swap(a[j],a[min]);
		}
}
int main()
{
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
		cin>>a[i];
	selectionSort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
}
