#include<string>
#include "book.h"
using namespace std;

class borrowed_book : public book
{
private:
    string borrow_date;
    string return_date;

public:
    borrowed_book();
    void printdata();
    void readdata();
};

