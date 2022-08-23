#include <iostream>
#define SIZE 10003
using namespace std;

int L[SIZE], b[SIZE], nb;
void tim_day_con_tang(int a[], int n);
void xuat();

int main() {
	int n, a[SIZE];
	cout << "Nhap n: "; cin >> n;
	a[0] = -1;
	a[n] = INT_MAX;
	for (int i=0;i<n;i++)
		cin >> a[i];
	tim_day_con_tang(a, n);
	cout << L[n]-1 << "\n";
	xuat();
}

void xuat() {
	for (int i=0;i<nb;i++)
		cout << b[i] << " ";
}
void tim_day_con_tang(int a[], int n) {
	for (int i=0;i<=n;i++) {
		L[i] = 1;
		for (int j=0;j<i;j++) {
			if (a[j] <= a[i] && L[i] < L[j]+1)
				L[i] = L[j] +1;
		}
	}
	nb = L[n]-1;
	b[nb] = a[n];
	int j = n;
	for (int i=n-1;i>=0;i--) {
		if (L[i] == L[j]-1 && a[i] <= b[nb]) {
			b[nb-1]=a[i];
			nb--;
			j = i;
		}	
	}
	nb = L[n]-1;
}

