#include<iostream>
#include <string>
#include "student.h"
using namespace std;

Student::Student()
{
}

void Student::SetData()
{
    int i;
    cout<<"Give student's AM"<<endl;
    cin>>am;
    cout<<"Enter student's name "<<endl;
    cin>>oe;
    for (i=0; i<2; i++)
    {
        cout<<"Give grade for course "<<i+1<<endl;
        cin>>g[i];
    }
}

void Student::PrintData()
{
    cout<<"Student's AM is "<<am<<" and name "<<oe<<endl;
    for (int i=0; i<2; i++)
    {
        cout<<"Student's grade for course "<<i+1<<" is "<<g[i]<<endl;
    }
}


int Student::max_grade()
{
    int i, maxg=0, g[2];
    for (i=0; i<2; i++)
    {
        if (g[i]>maxg)
        {
            maxg=g[i];
        }
    }
    cout<<"The max grade is "<<maxg<<endl;
    return maxg;
}

int Student::min_grade()
{
    int i, ming=10, g[2];
    for (i=0; i<2; i++)
    {
        if (g[i]<ming)
        {
            ming=g[i];
        }
    }
    cout<<"The minimum grade is "<<ming<<endl;
    return ming;
}

int Student::average_grade()
{
    for (int i=0; i<2; i++)
    {
        a=a+g[i];
    }
    return a=a/2;
    cout<<"The average grade is "<<a<<endl;
}

void Student::compareStudents(Student ss)
{
    if (ss.a > this->a)
        cout<<"The first student has the highest grades"<<endl;
    else cout<< "The second one, has the highest grades"<<endl;
}

void Student::findOlder(Student ss)
{
    if (ss.am<this->am)
        cout<<"The first student is older"<<endl;
    else
        cout<<"The second one is older"<<endl;
}

float Student::findStudentsAvg(Student ss)
{
    int j,i;
    ss.a=0;
    this->a=0;
    for (i=0; i<2; i++)
    {
        for (j=0; j<2; j++)
        {
            ss.a=ss.a+ss.g[i];
        }
        for (j=0; j<2; j++)
        {
            this->a=this->a+this->g[i];
        }
    }
return 0;
}

