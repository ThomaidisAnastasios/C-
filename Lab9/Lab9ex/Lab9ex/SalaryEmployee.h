#include "Employee.h" // Employee class definition
#ifndef SALARIED_H
#define SALARIED_H
class SalaryEmployee : public Employee 
{
public:
   SalaryEmployee();
   SalaryEmployee( string fn, string ln ,string ssn, double sal );

   void setSalaryEmployee( string fn, string ln ,string ssn, double sal  ); // set weekly salary
  
   virtual double earnings() ; // calculate earnings
   virtual void printEmployee() ; // print SalariedEmployee object
private:
   double weeklySalary; // salary per week
};
#endif
