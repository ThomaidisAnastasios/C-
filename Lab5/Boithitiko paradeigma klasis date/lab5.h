#include <iostream>
using namespace std;
class Date
{
 
 friend ostream &operator<<( ostream &output, const Date &d );
 friend istream &operator>>(istream &input,  Date &d );  
 private: 
          int day,month,year;
          static const int days[]; 
 public: 
         Date();
         Date(int d,int m, int y);
         void setDate( int, int, int ); // set month, day, year
         bool leapYear(); // is date in a leap year?
         bool endOfMonth() ;
         void helpIncrement(); 
         Date &operator++(); // prefix increment operator
         Date &operator++(int);  
         Date &operator+=(int value);
        
};