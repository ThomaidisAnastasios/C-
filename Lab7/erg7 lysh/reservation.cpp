#include<iostream>
#include "reservation.h"
using namespace std;

void reservation::setdata(int c, string onoma, int  t, string ti, string d)
{
    code=c;
    oe=onoma;
    tickets=t;
    date=d;
    time=ti;
}
void reservation::printdata()
{
    cout<<"Kodikos: "<<code<<endl;
    cout<<"Onomateponimo: "<<oe<<endl;
    cout<<"Arithmos eisitiriwn: "<<tickets<<endl;
    cout<<"Hmerominia: "<<date<<endl;
    cout<<"Ora: "<<time<<endl;
}
int reservation::get_code()
{
    return code;
}
