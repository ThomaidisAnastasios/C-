#include <iostream>
#include "date.h"
#include <cstdlib>
using namespace std;

int main()
{
    Date d1;
    Date d2(31,12,2016);
    cout<<++d2<<endl;
    cout<<++d1<<endl;

   system("PAUSE");
   return EXIT_SUCCESS;
}
