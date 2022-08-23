#include<iostream>
#include<string.h>
using namespace std;
void nhap(char A[]);
void Chuin(char A[]);
void daoNguocChuoi(char A[]);
void TuDaiNhat(char s[]);
void khoangtrang(char s[]);
int main()
{
    char A[200];
    nhap(A);
    daoNguocChuoi(A);
    Chuin(A);
    TuDaiNhat(A);
    khoangtrang(A);
}
void daoNguocChuoi(char A[])
{

    cout << _strrev(A) << "\n";
    _strrev(A);
}

void nhap(char A[])
{
    gets(A);
    puts(A);

}
void Chuin(char A[])
{
    int len = strlen(A);
    int i = 0;
    while (i < len)
    {
        if (A[i] >= 'A' && A[i] <= 'Z')
            cout << A[i] << "\n";
        i++;
    }

}
void TuDaiNhat(char A[])
{
    int i;
    int maxx = 0, maxi = 0;
    int len = strlen(A);
    if (A[0] == ' ')
    {
        for (i = 0; i < len - 1; i++)
        {
            if ((A[i] == ' ') && (A[i + 1] != ' '))
            {
                int j = i + 1;
                int dem = 0;
                while ((A[j] != ' ') && (A[j] != '\0'))
                {
                    dem++;
                    j++;
                }
                if (dem > maxx)
                {
                    maxx = dem;
                    maxi = i + 1;
                }
                i = j - 1;
            }
        }
    }
    else
    {
        i = 0;
        int dem = 0;
        while ((A[i] != ' ') && (A[i] != '\0'))
        {
            dem++;
            i++;
        }
        if (dem > maxx)
        {
            maxx = dem;
            maxi = 0;
        }
        for (i = maxx - 1; i < len - 1; i++)
        {
            if ((A[i] == ' ') && (A[i + 1] != ' '))
            {
                int j = i + 1;
                int de = 0;
                while ((A[j] != ' ') && (A[j] != '\0'))
                {
                    de++;
                    j++;
                }
                if (de > maxx)
                {
                    maxx = de;
                    maxi = i + 1;
                }
                i = j - 1;
            }
        }
    }
    int k;
    for (k = maxi; k < (maxi + maxx); k++)
    {
        cout << A[k];
    }
    cout << "\n";
}
void khoangtrang(char A[])
{
    int i;
    int n = strlen(A);
    for (i = 0; i < n; i++) { // Ch?y d?n giá tr? '\0' d? ki?m tra ph?n t? cu?i cùng
        if (A[i] == ' ') {
            int nBegin = i;

            if (A[i + 1] == ' ') {
                nBegin = i + 1;
            }

            if (A[i + 1] == ' ' || i == 0 || i == n - 2) {
                for (int j = nBegin; j < n - 1; j++) {
                    char cTemp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = cTemp;
                }
                i--;
                n--;
            }
        }
    }
    A[n] = '\0';
    puts(A);
}