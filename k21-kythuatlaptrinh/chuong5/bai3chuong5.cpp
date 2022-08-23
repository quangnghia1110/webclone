#include<iostream>
#include<math.h>
using namespace std;
const long MIN = -1000000000;
void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) 
	{
        cin >> a[i];
    }
}
int Fun(int a[], int n) {
    long max = MIN;
    for (int i = 0; i < n; i++) 
	{
        if (a[i] > max && a[i] % 2 == 0)
            max = a[i];
    }
    if( max == MIN )
        return -1;
    else
        return max + 1;
}
int main() {
    int a[100];
    int n;
    cin >> n;
    nhapmang(a, n);
    if (Fun(a, n) == -1)
        cout << "Mang khong co phan tu chan";
    else
        cout << "So le be nhat lon hon tat ca cac so chan la: " << Fun(a, n);
    return 0;
}