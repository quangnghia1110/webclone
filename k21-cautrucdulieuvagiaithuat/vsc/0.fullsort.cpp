#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
void insertion(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int x=a[i];
		int j=i-1;
		while(i>=0&&a[j]>x)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
}
void selection(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		int min=i;
		for(int j=i+1;j<n;i++)
		{
			if(a[j]<a[min])
				min=j;
		}
		swap(a[i],a[min]);
	}
}
void bubble(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		int j=i-1;
		while(j>=0)
		{
			if(a[j]>a[j-1])
			{
				break;
			}
			swap(a[j],a[j-1]);
			j--;
		}
	}
}
void quick(int a[],int l,int r)
{

	int x=a[r];
	for(int i=l;i<r;i++)
	{
		int j=i-1;
		if(a[i]<=x)
		{
			++j;
			swap(a[i],a[j]);
		}
	
	}
		++j;
		swap(a[i],a[j]);
	return j;
}
void quicks()
{
	if(l<=r)	
		return;
	int m=quick(a,l,r)
	quick(a,l,m-1);
	quick(a,l+1,r)
}
int *test(int *m1,int n,int *m2,int m)
{
	int i=0,j=0,dem=0;
	int *c=new int(n+m);
	while(i<=n&&j<=m)
	{
		if(m1[i]<m2[j])
			c[dem++]=m1[i++];
		else
			c[dem++]=m2[j++];
	}
	for(int i=0;i<n;i++)
		c[dem++]=m1[i];
	for(int j=0;j<m;j++)
		c[dem++]=m2[j];
	return c;
}
int mergeSort(int a[],int n)
{
	if(n==1)
		return a;
	int mid=n/2;
	int *m1=new int(mid);
	int *m2=new int(n-mid);
	for(int i=0;i<mid;i++)
		m1[i]=a[i];
	for(int i=0;i<n-mid;i++)
		m2[i]=a[i+mid];
	m1=mergeSort(a,mid);
	m2=mergeSort(a,n-mid);
	return test(m1,mid,m2,n-mid)
}
int main()
{

}
