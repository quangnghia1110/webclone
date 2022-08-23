#include <iostream>
#include <cstdio>
using namespace std;
 
void EnterDate(int &date, int &month, int &year);
int TestDate();
int LeapYear(int year);
 
int main()
{
    int date1, month1, year1;
    printf("Moi nhap ngay thang nam (dd/mm/yyyy): ");
    EnterDate(date1,month1,year1);
    int date2=01,month2=01,year2=year1+1;
    int dateOfYear=0,dateOfMonth=0, date=0;
    
    for (int i=year1;i<year2;i++)
        if( LeapYear(i)) dateOfYear+=366;  //////
        else dateOfYear+=365;
 
    int a[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if ( LeapYear(year2)) a[1]=29;           /////
    if (month1>month2)
    {
        for (int i=month2;i<month1;i++)
            dateOfMonth-=a[i-1];
    }
    else
    {
        for (int i=month1;i<month2;i++)
            dateOfMonth+=a[i-1];
    }
 
    date=date2-date1+1;     
    cout<< "Khoang cach giua hai ngay vua nhap la:   " << dateOfYear + dateOfMonth + date;
    cout<<" ngay.";
    return 0;
}
 
void EnterDate(int &date, int &month, int &year)
{
    scanf("%d/%d/%d",&date,&month,&year);
}
 
int LeapYear(int year)
{
    if (year % 400==0) return 1;
    else if (year % 100!=0 && year % 4==0) return 1;
}
  
