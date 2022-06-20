#include <cstdlib>
#include <iostream>
#include <string>
#include "person.h"
using namespace std;

class student : public person
{
private:
        float DegreeRate;                   
public: 
        student();
        student(string f, string l);
        void ReadData();
        virtual  void Print();
        virtual bool isExcellent(); 
}
