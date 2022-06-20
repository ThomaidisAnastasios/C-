#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class person
{
private:
        string firstName, lastName, PrPtr[100];
        
public:
       person();
       person(string f, string l);        
       void ReadData();
       virtual void Print();  
       virtual bool isExcellent()=0;      
}
