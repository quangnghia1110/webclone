#include <stdio.h>
#include <string.h>
void main(void)
{
char s[30],i,dem=0;
printf("Moi ban nhap vao mot chuoi: ");
gets(s);
printf("Ban moi nhap vao chuoi: %s",s);
for(i=0;i<strlen(s);i++)if(s[i]=='a')dem++;
printf("\nChuoi co %d ky tu a",dem);
}
