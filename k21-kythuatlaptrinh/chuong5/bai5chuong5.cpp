#include <iostream>
#include <math.h>

using namespace std;

long long Count(int n);

int main()
{
    int n;
    cin >> n;
    cout << Count(n) << endl;
    return 0;
}
long long Count(int n)
{
    long long p = 0;
    int bitcount = 0;
    while (n > 0)
    {
        p++;
        if (n % 2 == 1)
            bitcount++;
        n /= 2;
    }
    return bitcount;
}
