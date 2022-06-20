#include <cstdlib>
#include <iostream>
#include "taxi.h"
using namespace std;

int main(int argc, char *argv[])
{
    coordinates c1(5000,  -2500);
    coordinates c2;
    c2.readdata();
    taxi t1("NZN 2345", c1);
    taxi t2;
    t2.readdata();
    cout<<t1<<endl;
    cout<<t2<<endl;
    t1.calculate(c1);
    t2.calculate(c2);
}

