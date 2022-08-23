using namespace std;
#include <iostream>
#define size 100

int A[size];

int Fn(int m);

int main()
{
	int m,n;
	cin >> m;
	cout << Fn(m);
}

int Fn(int m)
{
	A[0]=1;
	A[1]=2;
	A[2]=3;
	int i=3;
	while(A[i]<=m)
	{
		i++;
		A[i]=A[i-3]+2*A[i-2]+3*A[i-1];
	}
	return i-2;
}
