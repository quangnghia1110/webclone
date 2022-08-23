#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int day, month, year, tg, day1, month1, year1;
    cin>>day; day1=day;
    cin>>month; month1=month;
    cin>>year; year1=year;
    switch(month)
    {
        case 4:
        case 6:
        case 9:
        case 11:
            tg = 30;
            break;
        case 2:
            tg = 28 + ((year%4==0 && year%!100==0) || (year%400==0));
            break;
        default:
            tg = 31;
    }
    day = (day%tg)+1;
    if(day==1)
    {
        month = (month%12)+1;
    }

    printf("%d",day);
    return 0;
}