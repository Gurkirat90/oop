//basic to usd
#include<iostream>
using namespace std;
class time
{
  int hours;
  int mins;
  public:
  time(){hours =0;mins=0;}
  time(int f)
{
  hours =f/60;mins=f%60;
}
  void showdata()
{
  cout<<"hours remaining are "<<hours<<" and "<<mins<<" minutes";
}
};
int main()
{
  int x=89
  time t1(x);
  t1.showdata();
}
//when this class member function returns certain value 
//then that becomes the case of convesion of class to basic
