#include <iostream>
#include "vector.h"
#include <cmath>
using namespace std;

    vector::vector()
        {
            x=0;
            y=0;
        }

    vector::vector(int x1, int y1)
        {
            x=x1;
            y=y1;
        }

    void vector::setData(int x3, int y3)
    {
        x=x3;
        y=y3;
    }
    void vector::readData()
    {
        cout << "Enter x: "<<endl;
        cin >> x;
        cout << "Enter y: "<<endl;
        cin >> y;
    }

    void vector::printData()
    {
        v=sqrt(x^2+y^2);
        cout <<" The vector is "<< v << endl;
    }
