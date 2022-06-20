#include<iostream>
#include "date.h"
using namespace std;
date::date()
{
  dd=mm=yy=0;          
}
date::date(int d,int m,int y)
{
   dd=d;
   mm=m;
   yy=y;               
}
void date::printdata()
{
    cout<<dd<<"/"<<mm<<"/"<<yy<<endl;     
}
void date::readdata()
{
  cout<<"Give day";
  cin>>dd;
  cout<<endl;
  cout<<"Give month";
  cin>>mm;
  cout<<endl;
  cout<<"Give year";
  cin>>yy;
  cout<<endl;
 }
     
