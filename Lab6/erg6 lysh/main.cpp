#include <cstdlib>
#include <iostream>
#include "borrowed_book.h"
using namespace std;

int main(int argc, char *argv[])
{
    borrowed_book b1,b2;
    b1.readdata();
    b2.readdata();
    b1.printdata();
    b2.printdata();
}
