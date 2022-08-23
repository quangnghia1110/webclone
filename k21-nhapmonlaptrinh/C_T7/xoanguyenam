#include<stdio.h>
#include<string.h>
void xoa_cac_nguyenam(char chuoi_batky[],int do_dai,int i){
    if(i==do_dai-1)
        return;
    else if(chuoi_batky[i]=='a' || chuoi_batky[i]=='e' || chuoi_batky[i]=='i' || chuoi_batky[i]=='o' || chuoi_batky[i]=='u' || chuoi_batky[i]=='A' || chuoi_batky[i]=='E' || chuoi_batky[i]=='I' || chuoi_batky[i]=='O' || chuoi_batky[i]=='U'){
        strcpy(chuoi_batky+i,chuoi_batky+i+1);
        i--;
        do_dai--;
    }
    xoa_cac_nguyenam(chuoi_batky,do_dai,i+1);
}
int main(){
    char chuoi_batky[255]="Viet chuong trinnh xoa cac nguyen am A,U,E,I,O trong chuoi.";
    printf("Noi dung cua chuoi da nhap la:\n<%s>",chuoi_batky);
    int do_dai=strlen(chuoi_batky);
    xoa_cac_nguyenam(chuoi_batky,do_dai,0);
    printf("\nNoi dung cua chuoi sau khi xoa cac nguyen am la:\n<%s>",chuoi_batky);
    return 0;
}