#include <iostream>
#include "Date.h"
using namespace std;
Date::Date()
{
     day=0;
     month=0;
     year=0; 
}
Date::Date (int d, int m, int y)
{
     day=d;
     month=m;
     year=y;
}
void Date::set(int d, int m, int y)
{
     day=d;
     month=m;
     year=y;
}
void Date::print()
{
     cout<<day<<"-"<<month<<"-"<<year<<endl;
}
void Date::read()
{
 cout<<"Give day";
 cin>>day;
 cout<<"Give month";
 cin>>month;
 cout<<"Give year";
 cin>>year;     

}



