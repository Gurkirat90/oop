#include<iostream>
using namespace std;
//constructors
//constructor is a special data member with name same as of 
//class.It is automatically invoked when ver object is created.Used to initialise the data
//member of the class.
class complex
{
    int a, b;
    public:
    complex(void);//constructor declaration

};
complex :: complex(void)//it is d default constructor it doews not 
//take any parameters
{
    a= 10;b=9;
    cout<<"constructor called"<<endl;
}
int main()
{
    complex c1,c2,c3;

    return 0;
}
/*properties of constructor
1.should only be in public section
2.It is automatically invoked when ver object is created
3.they cannot return values and do not have return types
4.it can have default arguments
5.we cannot refer to address
*/ 