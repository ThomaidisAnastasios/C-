#include <iostream>
#include "date.h"
#include <string>
using namespace std;

Date::Date(){
	day=1;
	month=1;
	year=1900;
}

Date::Date(int day1,int month1,int year1){
    day=day1;
    month=month1;
    year=year1;
}
const int Date::days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
bool Date::leapYear(){
    if (year%400==0 || (year%100!=0 && year%4==0))
        return true;
    else
        return false;
}

bool Date::endOfMonth(){
    if ( month == 2 && leapYear( ) )
      return day== 29; // last day of Feb. in leap year
   else
      return day==days[ month ];
}

void Date::helpIncrement()
{
   if ( !endOfMonth( ) )
      day++;
   else
      if ( month < 12 )
      {
         month++;
         day = 1;
      }
      else
      {
         year++;
         month = 1;
         day = 1;
      }
}

Date &Date::operator++()
{
  helpIncrement();
  return *this;
}

Date &Date::operator++(int)
{
  Date temp=*this;
  helpIncrement();
  return temp;
}

istream &operator>>(istream &input, Date &d)
{
 cout<<"Give date";
 input>>d.day;
 input>>d.month;
 input>>d.year;
 return input;
}

ostream &operator<<( ostream &output, const Date &d )
{
   static string monthName[13] = { "", "January", "February",
      "March", "April", "May", "June", "July", "August",
      "September", "October", "November", "December" };
   output << monthName[d.month] << ' ' << d.day << ", " << d.year;
   return output; // enables cascading
}



