#include<string>
#include "date.h"
using namespace std;
class event : public date
{
  private: string name;
  public: event();  
          event(string n, int d, int m, int y );   
          void printdata();
          void readdata();  
};
