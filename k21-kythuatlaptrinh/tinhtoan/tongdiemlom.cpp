#include<iostream>
using namespace std;
int a[104][104];
int X[8] = {-2,-1, -1, 0, 0, 1, 1, 2 };
int Y[8] = {0 ,-1, 1, -2, 2,-1, 1, 0};
void nhapmang(int a[][104],int &m, int &n)
{
	for(int i=0;i<104;i++)
	{
		for(int j=0;j<104;j++)
		{
			a[i][j]=104;
		}
	}
    cin >> m >> n;
    for(int i=2; i < m+2; i++)
    {
        for(int j=2; j<n+2; j++)
        {
            cin >> a[i][j];
        }
    }
}
bool check(int i, int j,int a[][104])
{
    for(int k = 0; k<8; k++)
        if(a[i][j] >= a[i + X[k]][j + Y[k]])
            return false;
    return true;
}

int main()
{
    int m, n;	
    nhapmang(a,m,n);
    int s = 0;
    for(int i=2; i < m+2; i++)
    {
        for(int j=2; j<n+2; j++)
        {
            if(check(i, j,a))
                s=s+a[i][j];
        }
    }
    cout<<s;   
}

