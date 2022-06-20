#include <string>
#include<iostream>
#include "Event.h"
using namespace std;

Event::Event():eventDate()
{
 name="";
}
Event::Event (string n, int d,int m,int y):eventDate(d,m,y)
{
 name=n;
}
void Event::set (string n, Date d)
{
     name=n;
     eventDate=d;
 
 }
void Event::print()
{
    cout<<name<<":";
    eventDate.print();
}
void Event::read()
{
  eventDate.read();
  cout<<"Give name";
  cin>>name; 
 
}
