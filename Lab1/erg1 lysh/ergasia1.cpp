#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float no1,no2;        //dilwsi metavlitwn
    char selection,praksi;
    long int x,y;
    cout<<"Gia na xrisimopoihsete tin arithmomixani pathste y (yes) alliws pathste n (no)."<<endl;
    cin>>selection;
    while (selection=='y')   //oso h epilogi einai nai
    {
        cout<<"Dwste ton prwto arithmo:"<<endl;  //zitaei tous arithmous
        cin>>no1;
        cout<<"Dwste ton deutero arithmo:"<<endl;
        cin>>no2;
        cout<<"Dwste tin praksi pou tha ginei."<<endl;   //zitaei tin tin praksi
        cin>>praksi;
        switch(praksi)   //elegxos gia pia praksi dothike
        {
            case '/':      //oles oi periptoseis
                {
                  while (no2==0)  //se periptosi pou einai 0, ksanazitaei arithmo
                  {
                      cout<<"Ksanadwste ton deutero arithmo."<<endl;
                      cin>>no2;
                  }
                  cout<<setw(10)<<setprecision(10)<<no1/no2<<endl;
                  break;
                }
             case '*':
                {
                    cout<<setw(10)<<setprecision(10)<<no1*no2<<endl;
                    break;
                }
             case '-':
                {
                    cout<<setw(10)<<setprecision(10)<<no1-no2<<endl;
                    break;
                }
             case '+':
                {
                    cout<<setw(10)<<setprecision(10)<<no1+no2<<endl;
                    break;
                }
             case '%':
                {
                  while (no2==0)
                  {
                      cout<<"Ksanadwste ton deutero arithmo."<<endl;
                      cin>>no2;
                  }
                  x=no1;   //anathetoume tous arithmous se metavlites long
                  y=no2;
                  cout<<setw(10)<<setprecision(10)<<x%y<<endl;
                  break;
                }


        }
      cout<<"Gia na ksanaxrisimopoihsete tin arithmomixani pathste y (yes) alliws pathste n (no)."<<endl;  //ksanakanei elegxo gia na mpei stin arithmomixani
      cin>>selection;

    }

}

