#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	char kytu;
	printf("nhap mot ky tu: ");scanf("%c", &kytu);
	if ('a'<=kytu && kytu<='z')
		kytu=kytu-32;
	else if('A'<=kytu && kytu<='Z')
		kytu=kytu+32;
	printf("Ky tu vua nhap la: %c\n", kytu);
	return 0;
}