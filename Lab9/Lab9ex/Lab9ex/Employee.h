#include <string> // C++ standard string class
using namespace std;
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
class Employee 
{
public:
   Employee();
   Employee(string fn ,  string ln,  string ssn );
   void setEmployee(string fn ,  string ln,  string ssn); // set employee
  
   // pure virtual function makes Employee abstract base class
   virtual double earnings() = 0; // pure virtual
   virtual  void printEmployee();// virtual
private:
   string firstName;
   string lastName;
   string socialSecurityNumber;
};
#endif
