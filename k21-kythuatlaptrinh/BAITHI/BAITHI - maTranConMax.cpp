using namespace std;
#include <iostream>
#include <iomanip>
#define size 100

void nhapMaTran(float A[][size], int& m, int& n);;
float tongMaTran3x3Max(float A[][size], int m, int n);

int main()
{
	float A[size][size];
	int m,n;
	nhapMaTran(A,m,n);
	cout <<fixed<< setprecision(2)<< tongMaTran3x3Max(A,m,n);
}

float tongMaTran3x3Max(float A[][size], int m, int n)
{
	int x[9]={-1,-1,-1,0,1,1,1,0,0};
	int y[9]={-1,0,1,1,1,0,-1,-1,0};
	float tong,max=0;
	for(int i=1;i<m-1;i++)
		for(int j=1;j<n-1;j++)
		{
			tong =0;
			for(int k=0;k<9;k++)
				tong+=A[i+x[k]][j+y[k]];
			cout << tong <<" ";
			if(tong > max)
				max =tong;
		}
	return max;
}

void nhapMaTran(float A[][size], int& m, int& n)
{
	cin >> m >> n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin >> A[i][j];
}
/*4 5
1 3 5 7 9
36 39 42 45 12
33 54 51 48 15
30 27 24 21 18*/
