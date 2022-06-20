#include <cstdlib>
#include <iostream>
#include "event.h"
using namespace std;

int main(int argc, char *argv[])
{
    date d1(12,12,2012), d2;
    event e1, e2("Christmas",25,12,2000);
    d2.readdata();
    d1.printdata();
    d2.printdata();
    e2.printdata();
    system("PAUSE");
    return EXIT_SUCCESS;
}