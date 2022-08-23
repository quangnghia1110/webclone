using namespace std;
#include <iostream>
#define size 100

void nhapMaTran(int A[][size], int& m, int& n);
void xuatMaTran(int A[][size], int m, int n); 
int ktGanMin(int A[][size], int m, int n, int i, int j);
void taoMaTranMin(int A[][size], int m, int n);

int main()
{
	int A[size][size];
	int m,n;
	nhapMaTran(A,m,n);
	taoMaTranMin(A,m,n);
	cout << endl;
	xuatMaTran(A,m,n);
} 

void taoMaTranMin(int A[][size], int m, int n)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			int temp=ktGanMin(A,m,n,i,j);
			if(temp!=0&&A[i][j]!=-1)
				A[i][j]=temp;
		}			
}

int ktGanMin(int A[][size], int m, int n, int i, int j)
{
	int x[8]={-1,-1,-1,0,1,1,1,0};
	int y[8]={-1,0,1,1,1,0,-1,-1};
	int dem=0;
	for(int k=0;k<8;k++)
	{
		if(A[i+x[k]][j+y[k]]==-1)
			dem++;
	}
	return dem;
}

void xuatMaTran(int A[][size], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
} 

void nhapMaTran(int A[][size], int& m, int& n)
{
	cin >> m >> n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			cin >> A[i][j];
			if(A[i][j]==1)
				A[i][j]=-1;
		}
}

/*4 5
0 0 1 0 1
0 1 0 1 1
1 0 0 1 0
0 1 1 1 0*/
