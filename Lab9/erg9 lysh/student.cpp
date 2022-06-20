#include <cstdlib>
#include <iostream>
#include <string>
#include "student.h"
#include "person.h"
using namespace std;

student::student()
{
                  
}
student::student(string f,string l)
{ 
    firstName = f;
    lastName = l;
}
void student::ReadData()
{
 person::ReadData();    
 cout<<"Give grade"<<endl;
 cin>>g;
}

virtual void student::Print()
{
     person::Print();
     cout<<g;
}

virtual bool isExcellent()
{
    if (g>=8.5)
         return true;
    else 
         return false;
         
}    
