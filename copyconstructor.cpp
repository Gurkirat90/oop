#include<iostream>
using namespace std;
class number
{
    int a;
    public:
    number(){}
    number(int num)
    {
        a=num;
    }
    number(number &obj)
    {
        cout<<"copy constructor called"<<endl;
        a = obj.a;
        //even without this code will easily run and
         //written lines below will explain
    }
    void display(void)
    {
        cout<<"number in object is"<< a <<endl;
    }
};
int main()
{
    number n1;
    n1 = number(3);
    n1.display();
    number n2(5);
    n2.display();
    //n3 should exactly replicate n2
    number n3(n2);//copy constructor invoked

    //this is a copy constructor 
    //only if there are these 2 lines it will show no error 
    //and program will run as it is suppose to be
    //when no copy constructor is found,
    //compiler supplies its own copy constructor.

    n3.display();
    number n4=n1;//copy constructor invoked
    return 0;
}