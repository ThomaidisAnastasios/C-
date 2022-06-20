#include <iostream>
#include "CommissionEmployee.h"

using namespace std;
CommissionEmployee::CommissionEmployee():Employee()
{
  grossSales=0;
  commissionRate=0; 
}
CommissionEmployee::CommissionEmployee(string fn ,  string ln,  string ssn,double gs, double cr ):Employee(fn,ln,ssn)
{
  grossSales=gs;
  commissionRate=cr;                   
}
void CommissionEmployee::setCommissionEmployee(string fn ,  string ln,  string ssn, double gs, double cr)
{
  Employee::setEmployee(fn,ln,ssn);
  grossSales=gs;
  commissionRate=cr;                  
}
void CommissionEmployee::printEmployee()
{
  Employee::printEmployee();
  cout<<endl;
  cout<<"Gross Sales: "<<grossSales<<endl;
  cout<<"Commission: "<<commissionRate<<endl;
                 
}
double CommissionEmployee::earnings() 
{ 
   return commissionRate * grossSales; 
} 

