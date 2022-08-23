#include<iostream>
#include<string.h>
using namespace std;
void chuyendoi(char S[])
{
	int a[100];
	int len=strlen(S);
	int sum = a[len-1];
    for(int i = 0; i < len; i++)
    {
        if(S[i] == 'I')
            a[i] = 1;
        else if(S[i] == 'V')
            a[i] = 5;
        else if(S[i] == 'X')
            a[i] = 10;
        else if(S[i] == 'L')
            a[i] = 50;
        else if(S[i] == 'C')
            a[i] = 100;
	}
    for(int i = len-1; i > 0; i--)
    {
        if(a[i] > a[i-1])
            sum = sum - a[i-1];
        else if(a[i] == a[i-1] || a[i] < a[i-1])
            sum = sum + a[i-1];
    }
    cout << sum;
}
int main()
{
    char S[100];
    gets(S);
    chuyendoi(S);
}