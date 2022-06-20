#include <iostream>
#include <string>
#include "pet.h"
using namespace std;



pet::pet(string n, string b, float w)
{
	name=n;
	breed=b;
	weight=w;
}

void pet::ReadData()
{
	cout<<"Give name of pet: "<<endl;
	cin>>name;
	cout<<"Give pet's breed: "<<endl;
	cin>>breed;
	cout<<"Give pet's weight: "<<endl;
	{
		
	};
	cin>>breed;
}

void pet::Print()
{
	cout<<"Name: "<<name<<endl;
	cout<<"Pet's breed: "<<breed<<endl;
	cout<<"Pet's weight: "<<weight<<endl;
}

string pet::get_name()
{
	return name;
}

string pet::get_breed()
{
	return breed;
}

float pet::get_weight()
{
	return weight;
}