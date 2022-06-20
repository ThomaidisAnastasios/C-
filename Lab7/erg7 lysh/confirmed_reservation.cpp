#include<iostream>
#include "confirmed_reservation.h"
using namespace std;

int confirmed_reservation::poso()
{
    if (room_type==1)
        {
        if (ticket_type==1)
            price=5;
        else if (ticket_type==2)
            price=7-(10/100)*7;
        else
            price=7;
        }
    else
        {
        if (ticket_type==1)
            price=5;
        else if (ticket_type==2)
            price=8-(10/100)*8;
        else
            price=8;
        }
    return price;
}

void confirmed_reservation::setdata(int c, string onoma, int  t, string ti, string d, int tt, int rt )
{
    reservation::setdata(c, onoma, t, ti, d);
    ticket_type=tt;
    room_type=rt;
}

void confirmed_reservation::printdata()
{
    reservation::printdata();
    cout<<"Tipos eisitiriou: "<<ticket_type<<endl;
    cout<<"Tipos aithousas: "<<room_type<<endl;
}
