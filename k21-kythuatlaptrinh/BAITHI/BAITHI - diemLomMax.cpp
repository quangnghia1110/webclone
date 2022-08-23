using namespace std;
#include <iostream>
#define size 100
struct VT
{
	int x,y;
};

void nhapMaTran(int A[][size], int& m, int& n);
bool diemLom(int A[][size], int m, int n, int i, int j);
VT vtDiemLomMax(int A[][size], int m, int n);

int main()
{
	int A[size][size];
	int m,n;
	nhapMaTran(A,m,n);
	VT x = vtDiemLomMax(A,m,n);
	cout << x.x<<" "<<x.y;
}

VT vtDiemLomMax(int A[][size], int m, int n)
{
	int B[size];
	int nb=0;
	VT temp[size];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			if(diemLom(A,m,n,i,j)==true)
			{
				B[nb]=A[i][j];
				temp[nb].x=i;
				temp[nb++].y=j;
			}
	}
	int max = B[0];
	VT tempvt=temp[0];
	for(int i=1;i<nb;i++)
	{
		if(max<B[i])
		{
			max=B[i];
			tempvt=temp[i];
		}
	}
	return tempvt;
}

bool diemLom(int A[][size], int m, int n, int i, int j)
{
	int x[4]={-1,0,1,0};
	int y[4]={0,1,0,-1};
	for(int k=0;k<4;k++)
	{
		if(A[i+x[k]][j+y[k]]<=A[i][j]&&i+x[k]>=0&&i+x[k]<m&&j+y[k]<n&&j+y[k]>=0)
			return false;
	}
	return true;
}

void nhapMaTran(int A[][size], int& m, int& n)
{
	cin >> m >> n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin >> A[i][j];
}
/*3 4
3 1 5 6
4 6 2 7
8 3 7 6*/
