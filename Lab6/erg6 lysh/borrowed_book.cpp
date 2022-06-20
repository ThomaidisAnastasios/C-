#include <iostream>
#include <string>
#include "borrowed_book.h"
using namespace std;

borrowed_book::borrowed_book():book()
{
    borrow_date="";
    return_date="";
}

void borrowed_book::readdata()
{
    book::readdata();
    cout<<"Borrow date: "<<endl;
    cin>>borrow_date;
    cout<<"Return date: "<<endl;
    cin>>return_date;
}

void borrowed_book::printdata()
{
    book::printdata();
    cout<<borrow_date;
    cout<<return_date;
}
