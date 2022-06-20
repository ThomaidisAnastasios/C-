#include <cstdlib>
#include <iostream>
#include "Person.h"
using namespace std;

int main(int argc, char *argv[])
{
    Person p1;
    Person p2(23,11112);
    p2.setdata(23,333);
    p1.readdata();
    p1.printdata();
    p2.printdata();
   // int ans=p2.AgeofRetired();
    //if(ans==0)
    if(p2.AgeofRetired()==0)
    cout<<"To antikeimeno p2 den exei ilikia pano apo 65";
    else 
     cout<<"To antikeimeno p2 exei ilikia pano apo 65";
    system("PAUSE");
    return EXIT_SUCCESS;
}
