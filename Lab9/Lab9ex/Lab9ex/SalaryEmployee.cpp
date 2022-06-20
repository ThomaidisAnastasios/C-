#include <iostream>
#include "SalaryEmployee.h"

using namespace std;
SalaryEmployee::SalaryEmployee():Employee()
{
  weeklySalary=0;
}
SalaryEmployee::SalaryEmployee(string fn ,  string ln,  string ssn, double sal ):Employee(fn,ln,ssn)
{
  weeklySalary=sal;                  
}
void SalaryEmployee::setSalaryEmployee(string fn ,  string ln,  string ssn, double sal)
{
  Employee::setEmployee(fn,ln,ssn);
  weeklySalary=sal;                 
}
void SalaryEmployee::printEmployee()
{
  Employee::printEmployee();
  
  cout<<endl<<"Weekly Salary:"<<weeklySalary<<endl;
 
                 
}
double SalaryEmployee::earnings() 
{ 
   return weeklySalary * 4; 
} 

