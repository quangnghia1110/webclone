#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char s[10000];
	for (int i = 0; i < n; i++)
		cin >> s[i];
	int tong = 0;
	for (int i = 0; i < strlen(s); i++) {
		int dem = 0;
		if (s[i] >= '0' && s[i] <= '9') {
			dem = (int)s[i] - 48;
			while (s[i + 1] >= '0' && s[i + 1] <= '9') {
				dem = dem * 10 + ((int)s[i + 1] - 48);
				i++;
				if (i >= strlen(s) - 1) break;
			}
		}
		tong += dem;
	}
	cout << tong;
	return 0;
}