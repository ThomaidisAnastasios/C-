#include <cstdlib>
#include <iostream>
#include "Money.h"
using namespace std;
Money MoneyAdd(Money m1, Money m2);
int main(int argc, char *argv[])
{
    Money m1(20,53);
    Money m2 (30,60);
    Money m3;
    Money m4;
    Money m5;
    m3.add(m1,m2);
    
    m4=addMoney(m1,m2);
    m4.print();
    m5=MoneyAdd(m1,m2);
    m5.print();
   // m1.print();
   // m2.print();
    system("PAUSE");
    return EXIT_SUCCESS;
}
Money MoneyAdd(Money m1, Money m2)
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
