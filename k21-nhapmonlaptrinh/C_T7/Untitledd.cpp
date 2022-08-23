#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

//===chuong trinh chinh===
int main()
{
    // Khai bao bien
    int day, month, year, tg, day1, month1, year1;

    // Nhap du lieu
    cout<<"Nhap vao ngay: "; cin>>day; day1=day;
    cout<<"Nhap vao thang: "; cin>>month; month1=month;
    cout<<"Nhap vao nam: "; cin>>year; year1=year;

    // Xac dinh so ngay trong thang
    switch(month)
    {
        case 4:
        case 6:
        case 9:
        case 11:
            tg = 30;
            break;
        case 2:
            tg = 28 + ((year%4==0 && year%100) || (year%400==0));
            break;
        default:
            tg = 31;
    }

    // Hien thi ngay mai
    day = (day%tg)+1;
    if(day==1)
    {
        month = (month%12)+1;
    }

    cout<<"Ngay mai: "<<day<<"/"<<month<<"/"<<year+(month==1 && day==1);
    return 0;
}