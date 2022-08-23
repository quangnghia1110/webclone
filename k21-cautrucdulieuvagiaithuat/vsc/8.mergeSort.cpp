#include<iostream>
#include<math.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int* merge(int *m1,int n,int *m2,int m)
{
	int *c=new int[n+m];
	int i=0,j=0,count=0;
	while(i<n&&j<m)
	{
		if(m1[i]<m2[j])
		{ 
			c[count++]=m1[i++];
		}           
		else{
			c[count++]=m2[j++];
		}           
	}
	for(int k=i;k<n;k++)
		c[count++]=m1[k];
	for(int k=j;k<m;k++)
		c[count++]=m2[k];
	return c;
	            
}
int* mergeSort(int a[],int n)
{
	if(n==1)
		return a;
	int spilt=n/2;
	int *m1=new int[spilt];
	int *m2=new int[n-spilt];
	for(int i=0;i<spilt;i++)
		m1[i]=a[i];
	for(int i=0;i<n-spilt;i++)
		m2[i]=a[i+spilt];
	
	m1=mergeSort(m1,spilt);
	m2=mergeSort(m2,n-spilt);
	return merge(m1,spilt,m2,n-spilt);
	
}
int main()
{
	
	int a[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int *c=mergeSort(a,n);
	for(int i=0;i<n;i++)
		cout<<c[i]<<"\t";
	
}
                     