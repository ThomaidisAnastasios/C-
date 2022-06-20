#include <string>
#include "Date.h"
using namespace std;

class Event
{
      private: string name;
               Date eventDate;
      public: Event();
              Event (string n, int d,int m,int y);
              void set (string n, Date d);
              void print(); 
              void read();
      
};
