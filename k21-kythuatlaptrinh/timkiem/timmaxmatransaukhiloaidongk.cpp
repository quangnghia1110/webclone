#include <iostream>
using namespace std;

void deleteRow(int a[][100], int &m, int n, int row)
{
    for (int i = row; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            a[i][j] = a[i + 1][j];
        }
    m--;
    
}

void max(int a[][100], int m, int n)
{
    int max = a[0][0];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] > max)
                max = a[i][j];
    cout << max;
}

int main()
{
    int a[100][100], m, n, k;
    cin >> m >> n;
    cin >> k;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    deleteRow(a, m, n, k);
    max(a, m, n);
    return 0; 
}