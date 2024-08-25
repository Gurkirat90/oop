#include<iostream>
using namespace std;

class complex;
class cal
{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
    int com(complex,complex);
                                                                  
};

class complex
{
    int a,b;
    friend int cal::com(complex , complex);
    public:
    void set(int a1,int b1)
    {
        a=a1;
        b=b1;
    }
    void printNumber()
    {
        cout<<"Your number is "<<a<<"+ "<< b <<"i"<<endl;
    }
   
};

int cal :: com(complex a1,complex a2){
        return(a1.a+a2.a);
    }


int main()
{
    complex c1,c2;
    c1.set(90,100);
    c2.set(-90,-10);
    cal calc;
   int res=calc.com(c1, c2);
   cout<<res<<endl;

   return 0;

}