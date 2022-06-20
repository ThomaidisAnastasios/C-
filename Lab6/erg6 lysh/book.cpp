#include<iostream>
#include "book.h"
using namespace std;

book::book()
{

}

book::book(string t, int i)
{
    title=t;
    isbn=i;
}

void book::printdata()
{
    cout<<title<<endl;
    cout<<isbn<<endl;
}

void book::readdata()
{
    cout<<"title: "<<endl;
    cin>>title;
    cout<<"isbn: "<<endl;
    cin>>isbn;
}
