#include <stdio.h>
#include <conio.h>
 
void Input(int*,int*,int*);
void Output(int,int,int);
 
int main()
{
    int day,month,year;
    Input(&day,&month,&year);
    Output(day,month,year);
    getch();
}
 
void Input(int *day,int *month,int *year)
{
    printf("Nhap ngay (1..31): ");scanf("%d",day);
    printf("\nNhap thang (1..12): ");scanf("%d",month); 
    printf("\nNhap nam : ");scanf("%d",year);
}
void Output(int day,int month,int year)
{
    int i;
    int sumday=0;
    int NormalYear[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int LeapYear[12]   = {31,29,31,30,31,30,31,31,30,31,30,31};
    if((year%4)==0)
    {
        for(i=1;i<month;i++)
            sumday+=LeapYear[i];
        sumday+=day;
    }
    else
    {
        for(i=1;i<month;i++)
            sumday+=NormalYear[i];
        sumday+=day;
    }
    switch(((year-1)+(year-1)/4-(year-1)/100+(year-1)/400+sumday )%7+year)
    {
        case 0: printf("\nNgay Chu nhat."); break;
        case 1: printf("\nNgay Thu hai.");  break;
        case 2: printf("\nNgay Thu ba.");   break;
        case 3: printf("\nNgay Thu tu.");   break;
        case 4: printf("\nNgay Thu nam.");  break;
        case 5: printf("\nNgay Thu sau.");  break;
        case 6: printf("\nNgay Thu bay.");  break;
    }
}
