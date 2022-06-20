#include <iostream>
#include "House.h"
using namespace std;

void House::readData()
{
    cout<<"Dwste xrimatiki aksia gia to spiti"<<amount<<endl;
    cin>>amount;

    for(i=0;i<3;i++)
    {
      cout<<"Dwste emvadon dwmatiou"<<i+1<<endl;
      cin>>emvadon[i];
    }
}

void House::printData()
{
    cout<<"H xrhmatiki aksia tou spitiou einai: "<<amount<<endl;
    for(i=0;i<3;i++)
    {
        cout<<"To emvadon tou domatiou"<<i+1<<"einai: "<<emvadon[i]<<endl;
    }
}

double House::TotalArea()
{
    e=0;
    for(i=0;i<3;i++)
    {
        e=e+emvadon[i];
    }
    return e;
}

bool House::findBigger()
{
  if (this->findBigger()<h.findBigger())
   return true;
   else
   return false;
}

double House::findValueperMeter()
{
    value=amount/e;
    return value;
}
