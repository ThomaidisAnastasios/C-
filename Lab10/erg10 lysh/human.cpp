#include <iostream>
#include <string>
#include "human.h"
using namespace std;

human::human(){}

human::human(string na, string su)
{
	name=na;
	surname=su;
}

void human::ReadData()
{
	cout<<"Give human's name: "<<endl;
	cin>>name;
	cout<<"Give human's surname: "<<endl;
	cin>>surname; 
}

void human::Print()
{
	cout<<"Human's name: "<<name<<endl;
	cout<<"Human's surname: "<<surname<<endl;
}