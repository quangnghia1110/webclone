#include<stdio.h>
#include<string.h>

bool demuoc(int n)
{
	int count = 0;
	for (int i = 1; i <= n; i++) 
    {
		if (n % i == 0) 
        {
			count++;
		}
	}
	if (count == 3) 
    {
		return true;
	}
	else 
    {
        return false;
    }
}
int main() {
	int L, R;
	scanf("%d %d", &L, &R);
	int count = 0;
	for (int i = L; i <= R; i++) {
		if (demuoc(i)) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}