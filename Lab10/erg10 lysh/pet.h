#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

class pet : public animal {
private:
	string name, breed;
	float weight;
public:
	pet(){};
	pet(string n, string b, float w);
	void ReadData();
	virtual void Print();
	string get_name();
	string get_breed();
	float get_weight();
};