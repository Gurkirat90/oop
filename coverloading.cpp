#include<iostream>
using namespace std;

class complex
{
    int a, b;
    public:
    complex(void){a=0;v=0;}
    complex(int x,int y =0){a=x;b=y;}
    complex(int x){a=x;b=0;}
    void printnumber(void)
    {
        cout<<"Complex number is "<<a <<"+"<<"i"<<b<<endl;
    }

   
};

int main()
{
    //implicit call
    complex c;
    complex c1(5); 
    complex c2= complex(9);
    c.printnumber();
    c1.printnumber();
    c2.printnumber();
     return 0;
}