#include<stdio.h>
#include<string.h>

bool kiemtra(int D, int M, int Y) {
	switch (M) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (D > 0 && D <= 31) {
			return true;
			break;
		}
		else return false;
		break;

	case 4: case 6: case 9: case 11:
		if (D > 0 && D <= 30) {
			return true;
			break;
		}
		else return false;
		break;
	case 2:
		if ((Y % 4 == 0 || Y % 100 != 0 && Y % 400 == 0) && D > 0 && D <= 29) {
			return true;
			break;
		}
		else if (D > 0 && D <= 28) {
			return true;
			break;
		}
		else return false;
		break;
 }
}

void timquy(int D, int M, int Y) {
	switch (M) {
	case 1: case 2: case 3:
		printf("1");
		break;
	case 4: case 5: case 6:
		printf("2");
		break;
	case 7: case 8: case 9:
		printf("3");
		break;
	case 10: case 11: case 12:
		printf("4");
		break;
	}
}

void ngaycuathang(int D, int M, int Y) {
	switch (M) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("31");
			break;

	case 4: case 6: case 9: case 11:
		
			printf("30");
			break;
		
	case 2:
		if (Y % 4 == 0 || Y % 100 != 0 && Y % 400 == 0) {
			printf("29");
			break;
		}
		else 
			printf("28");
			break;
	}
}

void ngayhomsau(int D, int M, int Y) {
	switch (M) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (D == 31, M == 12) {
			printf("1 1 %d", Y + 1);
			break;
		}

		if (D == 31) {
			printf("1 %d %d", M + 1, Y);
			break;
		}
		else printf("%d %d %d", D + 1, M, Y);
		break;
		
	case 4: case 6: case 9: case 11:
		if (D == 30) {
			printf("1 %d %d", M + 1, Y);
			break;
		}
		else printf("%d %d %d", D + 1, M, Y);
		break;
		
		
	case 2:
		if (Y % 4 == 0 || Y % 100 != 0 && Y % 400 == 0) {
			if (D == 29) {
				printf("1 %d %d", M + 1, Y);
				break;
			}
			else printf("%d %d %d", D + 1, M, Y);
			break;
		}
		else
			if (D == 28) {
				printf("1 %d %d", M + 1, Y);
				break;
			}
			else printf("%d %d %d", D + 1, M, Y);
		break;
	}
}

void ngayhomtruoc(int D, int M, int Y) {
	switch (M) {
	case 3:
		if (Y % 4 == 0 || Y % 100 != 0 && Y % 400 == 0) {
			if (D == 1) {
				printf("29 %d %d", M - 1, Y);
				break;
			}
			else printf("%d %d %d", D - 1, M, Y);
			break;
		}
		else if (D == 1) {
			printf("28 %d %d", M - 1, Y);
			break;
		}
		else printf("%d %d %d", D - 1, M, Y);
		break;

	case 1: case 5: case 7: case 8: case 10: case 12:
		if (D == 1, M == 1) {
			printf("31 12 %d", Y - 1);
			break;
		}

		if (D == 1) {
			printf("30 %d %d", M - 1, Y);
			break;
		}
		else printf("%d %d %d", D - 1, M, Y);
		break;

	case 4: case 6: case 9: case 11:
		if (D == 1) {
			printf("31 %d %d", M - 1, Y);
			break;
		}
		else printf("%d %d %d", D - 1, M, Y);
		break;


	case 2:
		if (D == 1) {
			printf("31 %d %d", M - 1, Y);
			break;
		}
		else printf("%d %d %d", D - 1, M, Y);
		break;
	}
}


int main() {
	int D, M, Y;
	scanf("%d %d %d", &D, &M, &Y);
	if (kiemtra(D, M, Y)) {
		printf("HOP LE");
		printf("\n");
		timquy(D, M, Y);
		printf("\n");
		ngaycuathang(D, M, Y);
		printf("\n");
		ngayhomsau(D, M, Y);
		printf("\n");
		ngayhomtruoc(D, M, Y);
	}
	else printf("KHONG HOP LE");
	return 0;
}