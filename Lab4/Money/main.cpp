#include <iostream>
#include "money.h"
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
Money MoneyAdd(Money m1, Money m2);
int main(int argc, char** argv) {
	
	 int d, c; 
     Money m1, m2, sum; 

     //sum = Money(0,0); 

     m1 = Money(1,23); 
     cout << "The first money is:"; 
     m1.display_money(); 

  
     m2 = Money(2,98); 
     cout << "The second money is:"; 
     m2.display_money(); 
	 compare(m1,m2);  //σύγκριση αντικειμένων με συνάρτηση friend
	 cout<<endl;
     sum.add(m1,m2);  // άθροισμα των τιμών των αντικειμένων και αποθήκευση στο αντικείμενο sum που καλεί τη συνάρτηση μέλος 
     cout <<endl<< "The sum is with member function usage:"; 
     sum.display_money(); 
     

	 
	 Money m4=addMoney(m1,m2); // άθροισμα των τιμών των αντικειμένων και αποθήκευση στο αντικείμενο m4 
	 //στο οποίο αποθηκεύεται το αποτέλεσμα της φιλικής συνάρτησης addMoney  
	 cout <<endl<< "The sum is with friend function usage:"; 
	 m4.display_money();
	 
	Money m5=MoneyAdd(m1,m2);// άθροισμα των τιμών των αντικειμένων και αποθήκευση στο αντικείμενο m4 
	 //στο οποίο αποθηκεύεται το αποτέλεσμα της global συνάρτησης MoneyAdd 
	cout <<endl<< "The sum is with global function usage:"; 
	 m4.display_money(); 

	return 0;
}

Money MoneyAdd(Money m1, Money m2)
{
	int d=m1.getDollars()+m2.getDollars();
	int c=m1.getCents()+m2.getCents();
	if (c>100)
	{
		c=c-100;
		d=d+1;
	}
	Money m(d,c);
	return m;
}