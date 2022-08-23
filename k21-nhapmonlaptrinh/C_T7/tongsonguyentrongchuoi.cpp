#include <stdio.h> 
#include <conio.h> 
#include<string.h>
int main() 
{ 
    char str[200]; 
    int i=0,j,tong=0,n; 
    printf("Nhap 1 chuoi: "); 
    gets(str); 
    while(i<=strlen(str)-1) 
        if(str[i]<='9' && str[i]>='0') 
        {         
            while(i<=strlen(str)-1 && (str[i]<='9' && str[i]>='0')) 
            { 
                n=10*n+(int)str[i]-48; 
                i++; 
            } 
        printf("%d + ",n); 
        tong=tong+n; 
        } 
    else i++; 
    printf("= %d",tong); 
         
}
