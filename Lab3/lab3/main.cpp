#include <cstdlib>
#include <iostream>
#include "Runner.h"

using namespace std;

int main(int argc, char *argv[])
{
    Runner r1, r2;
    int i;
    double n;
    r1.set_distance(4);
    r2.set_distance(4);
    
    for(i=0;i<5;i++)
    {
      cout<<"Give best times for runner 1, time "<<i+1<<":";
      cin>>n;
      r1.set_times(i,n);
      
      
    }
    cout<<endl;
     for(i=0;i<5;i++)
    {
      cout<<"Give best times for runner 2, time "<<i+1<<":";
      cin>>n;
      r2.set_times(i,n);
      
      
    }
    r1.display();
    cout<<endl;
    r2.display();
    if (r1.FindQuicker(r2))
     cout<<"Runner 1 is quicker with time:"<<r1.FindBest();
     else 
     cout<<"Runner 2 is quicker with time:"<<r2.FindBest();
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
