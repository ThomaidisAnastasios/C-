#include<string>
using namespace std;
class reservation
{
private:
    int code, tickets;
    string oe,time, date;
public:

    void setdata(int, string, int, string, string);
    void printdata();
    int get_code();
};
