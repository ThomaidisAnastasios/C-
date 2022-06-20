#include <iostream>
#include "Person.h"
using namespace std;

Person::Person()
{
 afm=0;
 age=0;                
}
Person::Person(int age1, int afm1)
{
  afm=afm1;
  age=age1;                 
}
void Person::printdata()
{
 cout<<"Hlikia:"<<age<<endl;
 cout<<"Afm:"<<afm;
 cout<<endl;
}
void Person::readdata()
{
cout<<"Give age:";
cin>>age;
cout<<endl;
cout<<"Give afm:";
cin>>afm;
cout<<endl;

}
void Person::setdata(int age2, int afm2)
{
 age=age2;
 afm=afm2; 
} 
int Person::AgeofRetired()
{
 if (age>65)
   return age;
  else
   return 0; 
}

