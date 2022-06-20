#include <iostream>
#include <cstdlib>
#include "vector.h"
#include <cmath>
using namespace std;

int main()
{
    vector v1,v3;
    vector v2(1,4);

    v1.readData();

    v3.setData(5,9);

    v1.printData();
    v2.printData();
    v3.printData();

    system("Pause");
    return EXIT_SUCCESS;
}
