include <stdio.h>
#include<string.h>

int main()
{
    char s[2000];
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]=='a'||s[i]=='e'||s[i]=='u'||s[i]=='i'||s[i]=='o'||s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'U' || s[i] == 'O')
        {

            strcpy(&s[i], &s[i + 1]);
            i--;
        }

    }  
    puts(s);
}
