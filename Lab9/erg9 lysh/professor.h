#include <cstdlib>
#include <iostream>
#include <string>
#include "person.h"
using namespace std;

class professor : public person
{
private:
        float numberofPublications;
              
public:
      professor();
      professor(string f, string l);
      void ReadData();
      virtual void Print();
      virtual bool isExcellent();          
}       
