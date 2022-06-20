#include "Employee.h"
#ifndef CEMPLOYEE_H
#define CEMPLOYEE_H

class CommissionEmployee: public Employee 
{
public:
   CommissionEmployee();
   CommissionEmployee(string fn ,  string ln,  string ssn, double  gs, double cr );
   void setCommissionEmployee(string fn ,  string ln,  string ssn, double  gs, double cr); // set employee
  
   // pure virtual function makes Employee abstract base class
   virtual double earnings(); // pure virtual
   virtual  void printEmployee();// virtual
private:
   double grossSales; // gross weekly sales
   double commissionRate; // commission percentage
};
#endif
