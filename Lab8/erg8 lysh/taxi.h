#include <string>
#include <cstdlib>
#include "coordinates.h"
using namespace std;

class taxi
{
private:
    string plate;
    coordinates place;

public:
    int coordinate_place();
    taxi();
    taxi(string plate, coordinates c);
    taxi (string plate, int x1, int y1);
    friend ostream &operator<<( ostream &output, taxi p);
    void readdata();
    float calculate(coordinates c);
};

