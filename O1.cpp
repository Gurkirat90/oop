//unary operator overloading
#include<iostream>
//The function operator-() takes no argument. Then, what does this operator function do?. It
//changes the sign of data members of the object S. Since this function is a member function
//of the same class, it can directly access the members of the object which activated it.
using namespace std;
class space
{
int x,y,z;
public:
void getdata(int a,int b, int c);
void display();
void operator-();
};
void space :: getdata(int a,int b, int c)
{
  x=a;y=b;z=c;
}
void space :: display()
{
  cout<<x<<" "<<y<<" "<<z<<endl;
}
void space :: operator-()
{
  x=-x;y=-y;z=-z;
}
int main()
{
  space s;
  s.getdata(2,3,4);
  s.display();
  -s;//acivates the -()operator function
  s.display();
}
//It is possible to overload a unary minus operator using a friend function as follows:
friend void operator-(space &s);
void operator-(space &s)
｛
/ declaration
s.x = -s.x;
s.y = -s.У :
s.z = -s.z;
}
// //unary operator overloading (using friend function)
// #include<iostream>
// using namespace std;
// class space
// {
// int x,y,z;
// public:
// void getdata(int a,int b, int c);
// void display();
// friend void operator-(space &s);
// };
// void space :: getdata(int a,int b, int c)
// {
//   x=a;y=b;z=c;
// }
// void space :: display()
// {
//   cout<<x<<" "<<y<<" "<<z<<endl;
// }
// void operator-(space &s)
// {
// s.x = -s.x;
// s.y = -s.y ;
// s.z = -s.z;
// }
// int main()
// {
//   space s;
//   s.getdata(2,3,4);
//   s.display();
//   -s;//acivates the -()operatorfunction
//   s.display();
// }
//--------------------------------------------------------------
//another example
