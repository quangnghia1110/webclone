#include<iostream>
#include <cmath>

using namespace std;

bool ktsnt(int n) {
	if (n < 2) {
		return false;
	}
if(n == 2 || n == 3){
    return true;
}
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}  
	}
	return true;
}

int timmin(int n, int a[]){
int min = 99999;
	for (int i = 0; i < n; i++) {
		if (ktsnt(a[i]) && a[i] < min) {
			min = a[i];
		}
    }
    if (min == 99999)
    return 0;
    else return min;
}


int main() {
	int n;
	int a[100];
    do{
	cin >> n;
    } while(n >= 100);
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	cout << timmin(n, a);
	return 0;
}