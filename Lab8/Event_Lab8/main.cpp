#include <cstdlib>
#include <iostream>
#include "Event.h"
using namespace std;

int main(int argc, char *argv[])
{
    Date d1, d2(13,4,2017),d3;
    d1.set(12,1,1997);
    d3.read();
    d3.print();
    Event e1("newyear",1,1,2017);
    Event e2, e3;
    e2.set("pasxa",d2);
    e2.print();
    e3.read();
    e3.print();
    system("PAUSE");
    return EXIT_SUCCESS;
}
