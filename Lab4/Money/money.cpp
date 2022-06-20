#include<iostream> 
#include<cstdlib> 
#include "money.h"
using namespace std; 
Money::Money() 
{ 
} 

Money::Money(int d, int c) 
{ 
       dollars = d; 
       cents = c; 
} 

void Money::display_money() 
{ 
     cout << "$" << dollars << "." << cents << endl; 
} 
int Money::getDollars()
{
return dollars;
}
int Money::getCents()
{
	return cents;
}
void Money::add(Money m1, Money m2) 
{ 
     int extra = 0; 
     cents = m1.cents + m2.cents; 
     if(cents >=100){ 
         cents = cents - 100; 
         extra = 1; 
     } 

     dollars = m1.dollars + m2.dollars + extra; 
} 

void compare(Money m1, Money m2)
{
  if ((m1.dollars*100+m1.cents)>(m2.dollars*100+m2.cents))
      cout<<"First object has more money";
      else cout<< "Second object has more money";
      
}
Money addMoney(Money m1, Money m2)
{
	int d=m1.dollars+m2.dollars;
	int c=m1.cents+m2.cents;
	if (c>100)
	{
		c=c-100;
		d=d+1;
	}
	Money m(d,c);
	return m;
}