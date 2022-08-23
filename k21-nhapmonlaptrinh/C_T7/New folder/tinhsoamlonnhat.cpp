#include <stdio.h>

int main() {
	int n;
	float min = 0;
	scanf("%d", &n);
	float arr[100000];
	for (int i = 0; i < n; i++) {
		scanf("%f", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		if ((arr[i] > min && arr[i] < 0) || (min == 0 && arr[i] < 0)) 
        min = arr[i];
	}
	printf("%.f", min);
	return 0;
}