#include<stdio.h>
#include<string.h>
void xoabokhoangtrang(char *c)
{
    int i=0,j;
    int n = strlen(c);
    for(i=0;i<n;i++)
     if(c[i]==' ')
      {
        j=i;
           while(c[j+1]!=' ')
           {
            c[j] = c[j+1];
            j++;
           }
        n--;
      }
    printf("\n\n%s",c);
}