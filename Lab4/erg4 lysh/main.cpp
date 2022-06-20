#include <iostream>
#include <string>
#include "student.h"
using namespace std;
int main(int argc, char** argv)
{
    Student s1, s2;

    s1.SetData();
    s2.SetData();

    s1.max_grade();
    s2.max_grade();
    s1.min_grade();
    s2.min_grade();

    s1.average_grade();
    s2.average_grade();

    s1.compareStudents(s2);

    s1.findOlder(s2);

    s1.findStudentsAvg(s2);


    return 0;
}
