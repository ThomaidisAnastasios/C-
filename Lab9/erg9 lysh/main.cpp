#include <cstdlib>
#include <iostream>
#include <string>
#include "person.h"
#include "professor.h"
#include "student.h"

using namespace std;

int main(int argc, char *argv[])
{   
    int i=0;
    string choice0="y",choice1; 
    person *PrPtr[100];
    while (choice0=="y")
    {
    cout<<"Are you planning to input data for a student(s) or a professor(p)?."<<endl;
    cin>>choice1;
    if (choice1=="s")
    {
       student *s=new student;      
       s.ReadData();
       PrPtr[i]=s;
       i++;
       s.Print();
       if s.isExcellent() 
          cout<<"Excellent student "<<endl;
       
    }
    
    else
    {
        professor *p=new professor;     
        p.ReadData();
        PrPtr[i]=p;
        i++; 
        p.Print();
        if p.isExcellent()
           cout<<"Excellent professor "<<endl;
    }
    cout<<"If you want to continue press y ,otherwise press n."<<endl;
    cin>>choice0;
    }
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

