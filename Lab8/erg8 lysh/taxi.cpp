#include <string>
#include<iostream>
#include <cmath>
#include <cstdlib>
#include "taxi.h"
using namespace std;
taxi::taxi()
{

}
taxi::taxi(string p, coordinates c)
{
    p="NZN 2345";
}
int taxi::coordinate_place()
{
    cout<<"Dwste sintetagmenes"<<endl;

}
void taxi::readdata()
{
    cout<<"Valte pinakida"<<endl;
    cin >> plate;
    place.readdata();
}

 ostream &operator<<( ostream &output, taxi t1 )
{
   output << t1.plate  ;
   output << t1.place  ;
   return output;
}

float taxi::calculate(coordinates c)
{
    return sqrt(pow((place.get_x()-c.get_x()),2)+pow(place.get_y()-c.get_y(),2));
}
