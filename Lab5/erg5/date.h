#include <iostream>
using namespace std;
class Date
{

private:
    int day, month, year;
    static const int days[];
public:
    friend ostream &operator<<( ostream &output, const Date &d );
    friend istream &operator>>(istream &input,  Date &d );

    Date();
    Date(int day1, int month1, int year1);
    bool leapYear();
    bool endOfMonth();
    void helpIncrement();
    Date &operator++();
    Date &operator++(int);
};
