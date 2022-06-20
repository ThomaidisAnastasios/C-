#include <cstdlib>
#include <iostream>
#include "confirmed_reservation.h"
using namespace std;

int main(int argc, char *argv[])
{
    confirmed_reservation c1,c2,c3,c4,c5;

    c1.setdata(001,"George Pappas",3,"21:00","23/02/2017",1,1);
    c2.setdata(002,"Nick Zounos",2,"17:30","30/01/2017",2,1);
    c3.setdata(003,"Maria Atkins",5,"19:00","03/03/2017",3,2);
    c4.setdata(004,"Kathy Heid",2,"22:30","16/01/2017",2,2);
    c5.setdata(005,"Klio Bouras",1,"23:00","09/01/2017",3,1);

    c1.printdata();
    c2.printdata();
    c3.printdata();
    c4.printdata();
    c5.printdata();

    c1.poso();
    c2.poso();
    c3.poso();
    c4.poso();
    c5.poso();
}
