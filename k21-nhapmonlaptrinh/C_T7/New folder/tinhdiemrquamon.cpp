#include<stdio.h>
#include<string.h>

float lamtronso(float(tb))
{
	float z = tb * 10;
	int y = z;
	float x = z - float(y);
	if (x < 0.5)
	{
		float t = y / 10.0;
		return t;
	}
	else
	{
		float t = (y + 1) / 10.0;
		return t;
	}
}


int main() {
	int k;
	do {
		scanf("%d", &k);
	} while (k < 0 || k >21);

	float x, y;
	scanf("%f %f", &x, &y);
	float tb = (x + y) / 2;
	float tb2 = lamtronso(tb);
	if ((k == 21 && tb2 >= 4.0) || k != 21 && tb2 >= 5.0) {
		printf("Pass");
	}
	else printf("Fail");
	return 0;
}