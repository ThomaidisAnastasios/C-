#include <cstdlib>
#include <iostream>

using namespace std;
#include <iostream>
#include <string>

#include "CommissionEmployee.h"  
#include "SalaryEmployee.h" 

int main(int argc, char *argv[])
{
   Employee * EmpPtr[100];
   string choice,ssn,fn,ln;
   double wsal,gs,cr;
   int i=0;
   do
   {
   cout<<"Provide Type of Employee CommissionEmplyee(c) or Salary Employee(s)";
   cin>>choice;
   if (choice=="s")
     {
      SalaryEmployee *se=new SalaryEmployee;             
      cout<<"FirstName:";
      cin>>fn;
      cout<<"LastName:";
      cin>>ln;
      cout<<"Social Security Number:";
      cin>>ssn;
      cout<<"Weekly salary:";
      cin>>wsal;
      se->setSalaryEmployee(fn,ln,ssn,wsal);  
      EmpPtr[i++]=se;          
     }
     if (choice=="c")
     {
      CommissionEmployee *ce=new CommissionEmployee;             
      cout<<"FirstName:";
      cin>>fn;
      cout<<"LastName:";
      cin>>ln;
      cout<<"Social Security Number:";
      cin>>ssn;
      cout<<"Gross Sales:";
      cin>>gs;
       cout<<"Commission rate:";
      cin>>cr;
      ce->setCommissionEmployee(fn,ln,ssn,gs,cr);  
      EmpPtr[i++]=ce;          
     }
   cout<<"Do you want to continue with another employee(y/n)";
   cin>>choice; 
   } 
   while (choice=="y");
   for(int n=0;n<i;n++)
    
    {
    cout<<endl;
    EmpPtr[n]->printEmployee();
    cout<<"Total monthly income: "<<EmpPtr[n]->earnings();
    cout<<endl;
    
    }
   
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
