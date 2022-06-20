#include <iostream>
#include <cstdlib>
#include "coordinates.h"
using namespace std;

coordinates::coordinates()
{

}
coordinates::coordinates(int x1, int y1)
{
    x=x1;
    y=y1;
}
void coordinates::readdata()
{
    cout<<"Dwste to x "<<endl;
    cin>>x;
    cout<<"Dwste to y"<<endl;
    cin>>y;
}

int coordinates::get_x()
{
    return x;
}

int coordinates::get_y()
{
    return y;
}
 ostream &operator<<( ostream &output, coordinates c1 )
{
   output << c1.get_x() << ' ' ;
   output << c1.get_y() << ' ' ;
   return output;
}
