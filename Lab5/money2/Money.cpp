#include <iostream>
#include "Money.h"
using namespace std;
Money::Money()
{
  cents=dollars=0;
}
Money::Money(int dollars, int cents)
{
 this->dollars=dollars;
 this->cents=cents;
}
void Money::print()
{
 cout<<dollars<<"."<<cents<<endl;
}
int Money::getDollars()
{
 return dollars;
}
int Money::getCents()
{
 return cents;    
}
void Money:: add(Money m1, Money m2)
{
//this->dollars=m1.dollars+m2.dollars;
 this->dollars=m1.getDollars()+m2.getDollars();
 this->cents=m1.getCents()+m2.getCents();
 if (cents>=100)
 {
   cents=cents-100;
   dollars+=1;
 }
}
 Money addMoney (Money m1, Money m2)
{
int d,c;
d=m1.getDollars()+m2.getDollars();
c=m1.getCents()+m2.getCents();
 if (c>=100)
 {
   c=c-100;
   d+=1;
 }
 Money m(d,c);
 return m;
}
