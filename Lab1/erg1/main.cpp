#include <cstdlib>
#include <iostream>
#include<iomanip>
using namespace std;// χώρος ονομάτων απαραίτητη δήλωση για να αναγνωριστούν τα cin, cout

int main(int argc, char *argv[])
{
    float num1, num2;
    char choice;
    char op;
    do
    {
       cout<<"Give number 1:"<<endl;
       cin>>num1;
       cout<<"Give number 2:\n";
       cin>>num2;
       cout<<"Give operator:";
       cin>>op;
       switch(op)
         {
            case '/':
                 {
                  cout<<fixed<<setw(10)<<setprecision(10)<<num1/num2;  
                  
                  break; 
                 }   
            default:
                   {
                    cout<<"Wrong operator";
                    break;     
                         
                   }  
                 
                 
                 
                 
                 
          }
       
       
       cout<<"Do you wish to continue";
       cin>>choice;
    
    
    
    
    }
    while(choice!='n'); 
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
