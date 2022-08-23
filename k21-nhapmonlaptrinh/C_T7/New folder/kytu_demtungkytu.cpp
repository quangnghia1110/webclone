#include <stdio.h>
#include<string.h>

int main()
{
    char s[2000];
    gets(s);
    int count=0;
    while (s[count] != '\0')
        count++;
    printf("%d",count);
}
