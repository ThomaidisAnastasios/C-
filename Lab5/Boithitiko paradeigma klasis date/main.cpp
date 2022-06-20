#include <cstdlib>
#include <iostream>
#include "lab5.h"
using namespace std;

int main(int argc, char *argv[])
{
   Date d1; // defaults to January 1, 1900
   Date d2(2,12,1993);
   cout<<++d2<<endl;
      cout<<d2++<<endl;
   d2+=9;
  // cin>>d2;
   cout<<d2;
   system("PAUSE");
   return EXIT_SUCCESS;
}