#include <string>
using namespace std;
class book
{
private:
    string title;
    int isbn;
public:
    book();
    book(string t,int i);
    void printdata();
    void readdata();
};

