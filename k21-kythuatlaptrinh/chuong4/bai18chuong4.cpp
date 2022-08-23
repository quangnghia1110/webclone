#include <iostream>
using namespace std;
#define int long long
int n, k;
string ans;
void quaylui(int pos, int sum, int mx)
{
	if (pos == n)
	{
		if(sum == 0 && mx == k)
			cout << ans << '\n';
		return;
	}
	if (sum > 0)
	{
		ans[pos] = ')';
		quaylui(pos + 1, sum - 1, mx);
	}
	if (n - pos > sum)
	{
		ans[pos] = '(';
		quaylui(pos + 1, sum + 1, max(mx, sum + 1));
	}
}
int32_t main()
{
	cin >> n >> k;
	ans = string(n, ' ');
	if (n & 1 || k > n / 2)
	{
		return 0;
	}
	quaylui(0, 0, 0);
	return 0;
}