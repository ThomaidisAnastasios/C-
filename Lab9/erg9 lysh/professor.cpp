#include <cstdlib>
#include <iostream>
#include <string>
#include "professor.h"
#include "person.h"
using namespace std;

professor::professor()
{
                      
}
professor::professor(string f, string l)
{
  firstName = f;
  lastName = l;
}
void professor::ReadData()
{
 person::ReadData();
 cout<<"Give papers"<<endl;
 cin>>gp;
}

virtual void professor::Print()
{
  person::Print();
  cout<<gp<<endl;
}

virtual bool isExcellent()
{
    if (gp>=50)
         return true;
    else 
         return false;
         
} 
