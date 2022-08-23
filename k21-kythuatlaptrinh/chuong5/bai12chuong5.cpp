
#include<iostream>
#define SIZE 50
using namespace std;
int B[SIZE];
void sinhHoanVi(int n);
void xuat(int A[],int n);
void doiCho(int &x,int &y);
void sapxeptangdan(int n, int B[]);
void latNguoc(int A[],int x,int y);
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>B[i];
	sinhHoanVi(n);
	
}

void sapxeptangdan(int n, int B[]){
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(B[i] > B[j]){
				int temp = B[i];
				B[i] = B[j];
				B[j] = temp;  
			} 
		} 
	} 
} 

void sinhHoanVi(int n)
{
	sapxeptangdan(n, B); 
	int A[SIZE]={0};
	for(int i=0;i<n;i++)
		A[i]=B[i];
	xuat(A,n);
	do
	{
		int k=n-2;
		while(k>=0&&A[k]>A[k+1])
		{
			k--;
		}
		if(k<0)
			break;
		int l=n-1;
		while(A[l]<A[k])
			l--;
		doiCho(A[k],A[l]);	
		latNguoc(A,k+1,n-1);
		xuat(A,n);
	}while(true);
}
void latNguoc(int A[],int x,int y)
{
	while(x<y)
	{
		doiCho(A[x],A[y]);
		x++;
		y--;
	}
}
void doiCho(int &x,int &y)
{
	int t=x;
	x=y;
	y=t;
}
void xuat(int A[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
}