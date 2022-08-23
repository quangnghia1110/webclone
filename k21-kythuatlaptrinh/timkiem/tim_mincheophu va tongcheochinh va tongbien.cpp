#include <iostream>
using namespace std;

void NhapMaTran(int a[][100], int& n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
}

void XuatMaTran(int a[][100], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
          cout<< a[i][j]<<" ";
        cout << "\n";
    }
    cout << "\n";
}

void XuatMaTranDao(int a[][100], int n)
{
    int tong = 0;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
            cout << a[i][j] << " ";
        cout << "\n";
    }
    cout << "\n";
}
void tongCheoChinh(int a[][100], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
        tong += a[i][i];
    cout << tong<<"\n";
}
void minCheoPhu(int a[][100], int n)
{
    int min=9999;
    for (int i = 0; i < n, n - i - 1 >= 0; i ++)
        if (a[i][n - i - 1] < min)
            min = a[i][n - i - 1];
    cout << min<<"\n";
}
void tongBien(int a[][100], int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
        sum += a[0][i];
    for (int i = 1; i < n; i++)
        sum += a[i][0];
    for (int i = 1; i < n; i++)
        sum += a[n-1][i];
    for (int i = 1; i < n-1; i++)
        sum+= a[i][n-1];
    cout << sum <<"\n";
}
int main()
{
    int a[100][100];
    int  n;
    NhapMaTran(a, n);
    XuatMaTran(a, n);
    XuatMaTranDao(a, n);
    tongCheoChinh(a, n);
    minCheoPhu(a, n);
    tongBien(a, n);
}