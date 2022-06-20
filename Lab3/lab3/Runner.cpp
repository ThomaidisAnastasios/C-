#include<iostream>
#include "Runner.h"
using namespace std;

void Runner::set_distance(int d)
{
 distance=d;
}
void Runner::set_times(int i, double t)
{
 time[i]=t;
}
void Runner::display()
{
 cout<<"For distance "<<distance<< " the best times are:";
 for(int i=0; i<5;i++)
   cout<<time[i]<<",";
   cout<<endl;
}
double Runner::FindBest()
{
 double min=time[0];
  for (int i=0;i<5;i++)
  {
    if (time[i]<min)
    min=time[i];
  }
  return min;
}
bool Runner::FindQuicker(Runner r) 
{
/* double time1= this->FindBest();
 double time2=r.FindBest();
 if(time1<time2)
  return true;
  else 
  return false;*/
  
  if (this->FindBest()<r.FindBest())
   return true;
   else
   return false;
}
