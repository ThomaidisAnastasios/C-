#include <iostream>
#include <fstream>
using namespace std;
#ifndef animal_h
#define animal_h
class animal {
private:
	int age;

public:
	animal();
	animal(int a);
	void ReadData();
	virtual void Print();
	int get_age();
};

#endif