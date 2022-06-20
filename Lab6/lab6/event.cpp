#include <iostream>
#include <string>
#include "event.h"
using namespace std;

event::event():date()
{
  name="";
}  
event::event(string n, int d, int m, int y ):date(d,m,y)
{
name=n;
}   
void event::printdata()
{
 cout<<"name:"<<name<<endl;
 date::printdata();
}
void event::readdata()
{
  cout<<"Give name of event:";
  cin>>name;
  cout<<endl;
  date::readdata();
}
