#include <iostream>
#include <string.h>
#define SIZE 101
using namespace std;
int L[101][101] = {0};
char c[101];
int main() {
	char a[101], b[101];
	cin.getline(a, 101);
	int j=0;
    for(int i= strlen(a)-1;i>=0;i--)
    {
		b[j]=a[i];
    	j++;
	}
	tinh_xau_con_dai(a, b);
	tim_xau_con(a, b);
	cout << L[strlen(a)][strlen(b)];
}

void tim_xau_con(char a[], char b[]) {
	int m = strlen(a);
	int n = strlen(b); 
	int nc = 0, temp = L[m][n]+1;
	for (int i=m;i>=1;i--) {
		for (int j=n;j>=1;j--) {
			if (a[i-1] == b[j-1] && L[i][j] == temp-1) {
				c[nc] = a[i-1];
				nc++;
				temp = L[i][j];
			}
		}
	}
	c[nc] = '\0';
	strrev(c);
}

void tinh_xau_con_dai(char a[], char b[]) {
	int m = strlen(a);
	int n = strlen(b);
	for (int i=1;i<=m;i++) {
		for (int j=1;j<=n;j++) {
			if (a[i-1]==b[j-1])
				L[i][j] = L[i-1][j-1] + 1;
			else
				L[i][j] = max(L[i-1][j], L[i][j-1]);
		}
	}
}