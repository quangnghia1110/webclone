#include<iostream>
#include <math.h>
using namespace std;

int tbcmoidong(int m, int n, int a[100][100]) {
	int tong = 0;
	int min = 0;
	for (int i = 0; i < m; i++) {
		min = a[i][0];
		for (int j = 1; j < n; j++) {
			if (min > a[i][j])
			{
				min = a[i][j];
			}
		}
		tong += min;
	}
	return round((float)tong / m);
}

int main() {
	int n, m;
	cin >> m >> n;
	int a[100][100];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	cout << tbcmoidong(m, n, a);
	return 0;
}