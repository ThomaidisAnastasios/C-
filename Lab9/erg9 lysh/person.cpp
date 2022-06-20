#include <cstdlib>
#include <iostream>
#include "person.h"
using namespace std;

person::person 
{
               
}
person::person(string f, string l)
{
     firstName = f;
     lastName = l;
}
void person::ReadData()
{
 cout<<"Give first name"<<endl;
 cin>>f;
 cout<<"Give last name"<<endl;
 cin>>l;  
}
virtual void person::Print()
{
     cout<<"First Name: "<<f<<endl;
     cout<<"Last Name: "<<l<<endl;
}


    
