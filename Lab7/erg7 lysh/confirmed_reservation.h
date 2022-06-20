#include<string>
#include "reservation.h"
using namespace std;
class confirmed_reservation : public reservation
{
private:
    int ticket_type,room_type;
    float price;
public:
    void setdata(int, string, int, string, string, int,int);
    void printdata();
    int poso();
};
