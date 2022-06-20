#include "lab5.h"
#include <iostream>
#include <string>
using namespace std;
Date::Date()
{
 day=1;
 year=1900;
 month=1;
              
}

Date::Date(int d,int m, int y)
{
  day=d;
  month=m;
  year=y;
          
}
const int Date::days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool Date::leapYear()
{
   if ( year % 400 == 0 || 
      ( year % 100 != 0 && year % 4 == 0 ) )
      return true; // a leap year
   else
      return false; // not a leap year
}
bool Date::endOfMonth( ) 
{
   if ( month == 2 && leapYear( ) )
      return day== 29; // last day of Feb. in leap year
   else
      return day==days[ month ];
}
void Date::helpIncrement()
{
   // day is not end of month
   if ( !endOfMonth( ) )
      day++; // increment day
   else 
      if ( month < 12 ) // day is end of month and month < 12
      {
         month++; // increment month
         day = 1; // first day of new month
      } // end if
      else // last day of year
      {
         year++; // increment year
         month = 1; // first month of new year
         day = 1; // first day of new month
      } // end else
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
Date &Date::operator+=(int value)
{
  for(int i=0;i<value;i++)
   this->helpIncrement();
   return *this;

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
