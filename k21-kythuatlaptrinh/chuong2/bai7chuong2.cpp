#include <stdio.h>
#include <string.h>
 
void xoa(char s[])
{
	for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]==' '&&s[i+1]==' ')
        {

            strcpy(&s[i], &s[i + 1]);
            i--;
        }

    }  
}
void inhoa(char s[])
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') 
			s[i] += 32;
        if (s[i - 1] == ' ' || i == 0)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - 32;
        }
    }
}
 
int main()
{
    char s[100];
    int i;
	gets(s);  
	xoa(s);
	inhoa(s);
    puts(s);
    return 0;
}