#include <stdio.h>
 void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
 
int min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}
int main()
{
    int a[1000];
    int n;
    scanf("%d", &n);
    nhap(a, n);
    printf("%d %d", max(a, n), min(a,n));
    return 0;
}#include<stdio.h>
#include<conio.h>
#include<string.h>
int demsotu(char *s);
int  main()
{
	char s[200];
    gets(s);
	int kq=demsotu(s);
	printf("%d",kq);
}
int demsotu(char *s)
{
	int n=strlen(s),i;
	int dem=0;
	if(s[0]!=' ')
		dem=1;
	for( i=0;i<n-1;i++)
	{
		if(s[i]==' ' && s[i+1]!=' ')
			dem++;
	}
	return dem;
}