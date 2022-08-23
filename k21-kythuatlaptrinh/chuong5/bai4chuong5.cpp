#include <iostream>

using namespace std;

int LayBit(int n, int k);
void BatBit(int n, int k);
void TatBit(int n, int k);
int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    BatBit(n, k);
    TatBit(n, k);
    LayBit(n, k);

    return 0;
}
int LayBit(int n, int k)
{
    return (n >> k) & 0x1;
}
void BatBit(int n, int k)
{
    n = n | (0x1 << k);
    cout << n << endl;
}
void TatBit(int n, int k)
{
    n = n & (~(0x1 << k));
    cout << n << endl;
}