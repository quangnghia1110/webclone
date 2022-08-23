#include <stdio.h>
#include<string.h>

int main()
{
    char s[2000];
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]==' ')
        {

            strcpy(&s[i], &s[i + 1]);
            i--;
        }

    }  
    puts(s);
}
