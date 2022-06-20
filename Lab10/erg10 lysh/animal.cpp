#include <iostream>
#include "animal.h"
using namespace std;

animal::animal(){}

animal::animal(int a)
{
	a=age;
}

void animal::ReadData()
{
	cout<<"Give age: "<<endl;
	cin>>age;
}

void animal::Print()
{
	cout<<"Age is: "<<age<<endl;
}