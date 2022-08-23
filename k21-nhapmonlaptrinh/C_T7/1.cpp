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
    do{
    scanf("%d", &n);}
    while(n<0||n>1000);
    nhap(a, n);
    printf("%d %d", max(a, n), min(a,n));
    return 0;
}