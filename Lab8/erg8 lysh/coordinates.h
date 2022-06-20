#include <iostream>
#include <cstdlib>
using namespace std;

class coordinates
{
private:
    int x, y;
public:
    coordinates();
    friend ostream &operator<<( ostream &output, coordinates c1 );
    coordinates(int x1, int y1);
    int get_x();
    int get_y();
    void readdata();
};
