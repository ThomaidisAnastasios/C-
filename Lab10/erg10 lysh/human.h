#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

class human : public animal {
private:
	string name, surname;
public:
	human();
	human(string na, string su);
	void ReadData();
	virtual void Print();
};