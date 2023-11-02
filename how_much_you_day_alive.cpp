#include <iostream>
using namespace std;

int main()
{
    int year, month, day;
    int year2, month2, day2;
    int sty, lut, mar, kwi, maj, cze, lip, sie, wrz, paz, lis, gru;
    sty = 0;
    lut = 31;
    mar = 59;
    kwi = 90;
    maj = 120;
    cze = 151;
    lip = 181;
    sie = 212;
    wrz = 243;
    paz = 273;
    lis = 304;
    gru = 334;

    cout<<"Enter the current year number: ";
    cin>>year;
    cout<<"Enter the current month number: ";
    cin>>month;
    if (month == 1)
    {
        month = sty;
    }
    if (month == 2)
    {
        month = lut;
    }
    if (month == 3)
    {
        month = mar;
    }
    if (month == 4)
    {
        month = kwi;
    }
    if (month == 5)
    {
        month = maj;
    }
    if (month == 6)
    {
        month = cze;
    }
    if (month == 7)
    {
        month = lip;
    }
    if (month == 8)
    {
        month = sie;
    }
    if (month == 9)
    {
        month = wrz;
    }
    if (month == 10)
    {
        month = paz;
    }
    if (month == 11)
    {
        month = lis;
    }
    if (month == 12)
    {
        month = gru;
    }
    cout<<"Enter today's number: ";
    cin>>day;
    cout<<"Enter your year of birth: ";
    cin>>year2;
    cout<<"Enter your month of birth number: ";
    cin>>month2;
    if (month2 == 1)
    {
        month2 = sty;
    }
    if (month2 == 2)
    {
        month2 = lut;
    }
    if (month2 == 3)
    {
        month2 = mar;
    }
    if (month2 == 4)
    {
        month2 = kwi;
    }
    if (month2 == 5)
    {
        month2 = maj;
    }
    if (month2 == 6)
    {
        month2 = cze;
    }
    if (month2 == 7)
    {
        month2 = lip;
    }
    if (month2 == 8)
    {
        month2 = sie;
    }
    if (month2 == 9)
    {
        month2 = wrz;
    }
    if (month2 == 10)
    {
        month2 = paz;
    }
    if (month2 == 11)
    {
        month2 = lis;
    }
    if (month2 == 12)
    {
        month2 = gru;
    }
    cout<<"Enter your date of birth number: ";
    cin>>day2;

    if (month2 > month)
    {
        int live = year - year2;
        int daylive = day2 - day;
        int livemonth = month2 - month;
        int live2 = live * 365 + livemonth + daylive;

        cout<<"You lived "<<live2<<" days.";
    } else {
        int live = year - year2;
        int daylife = day2 - day;
        int livemonth = month2 - month;
        int live2 = live * 365 - livemonth - daylife;

        cout<<"You lived "<<live2<<" days.";
    }
     
    return 0;
}
