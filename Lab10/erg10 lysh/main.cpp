#include <iostream>
#include <fstream>
#include <string>
#include "pet.h"
#include "human.h"

using namespace std;

int main(int argc, char** argv) 
{
	animal *Animal[100];

	int i=0,j=0,x;
	string option,option2;
	cout<<"Do you want to continue with the program? Type (y/n)"<<endl;
	cin>>option;
	ofstream outpet("pet1.txt");
	do{
		cout<<"Pet or human? (type p/h) "<<endl;
		cin>>option2;
		if (option2=="p")
		{
			pet *pet1 = new pet;
			Animal[i]=pet1;
			pet1->ReadData();
			outpet<<pet1->get_name();
			outpet<<pet1->get_breed();
			outpet<<pet1->get_weight();
		}
		else if (option2=="h")
		{
			human *human1 = new human;
			human1->ReadData();
			Animal[i]=human1;
		}
		else
			cout<<"Please re-enter statement"<<endl;

		i++;
		j++;
		
		cout<<"Do you want to continue with the program? Type (y/n)"<<endl;
		cin>>option;
	}while(option=="y");



for (x=0; x<j; x++)
{
	Animal[x]->Print();
}


}