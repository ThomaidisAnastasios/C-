#include <iostream>
#include "Employee.h"

using namespace std;
Employee::Employee()
{
  firstName="";
  lastName="";
  socialSecurityNumber="";                  
}
Employee::Employee(string fn ,  string ln,  string ssn )
{
  firstName=fn;
  lastName=ln;
  socialSecurityNumber=ssn;                  
}
void Employee::setEmployee(string fn ,  string ln,  string ssn)
{
  firstName=fn;
  lastName=ln;
  socialSecurityNumber=ssn;                  
}
void Employee::printEmployee()
{
  cout<<firstName<<" "<<lastName<<" " <<endl<<"Social Security Number:"<<socialSecurityNumber;
                 
}

