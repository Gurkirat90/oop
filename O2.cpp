#include<iostream>
using namespace std;
class complex
{
  float  x,y;
  public:
  complex(){}
  complex(float a,float b)
{
  x=a;y=b;
}
  void display()
{cout<<x<<" "<<y<<endl;}
   complex operator+(complex c2) ;
};
complex complex::operator+(complex c)
{
  complex temp;
  temp.x=x+c.x;
  temp.y=y+c.y;
  return temp;
  //return complex((x+c.x), (y+ с.y): 
  //to avoid this we can also write above
}
int main()
{
  complex c1,c2,c3;
  c1=complex(2.3,4.5);
  c2=complex(4.9,2.4);
  c3=c1+c2;
  c1.display();c2.display();
  c3.display();
  //c3=c1.operator+(c2);
  return 0;
}
// We should note the following features of this function:
// 1. It receives only one complex type argument explicitly.
// 2. It returns a complex type value.
// 3. It is a member function of complex.
//================================================================
//using friend function
// #include<iostream>
// using namespace std;
// class complex
// {
//   float  x,y;
//   public:
//   complex(){}
//   complex(float a,float b)
// {
//   x=a;y=b;
// }
//   void display()
// {cout<<x<<" "<<y<<endl;}
//    friend complex operator+(complex c1,complex c2) ;
// };
// complex operator+(complex c1,complex c2)
// {
//     return complex((c1.x+c2.x),(c1.y+c2.y));
// }
// int main()
// {
//   complex c1,c2,c3;
//   c1=complex(2.3,4.5);
//   c2=complex(4.9,2.4);
//   c3=c1+c2;
//   c1.display();c2.display();
//   c3.display();
//   //c3=c1.operator+(c2);
//   return 0;
// }//remember in friend function ousdide class
//syntax = returntype operator op(complexes);
