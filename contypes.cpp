#include<iostream>
using namespace std;

class complex
{
    int a, b;
    public:
    complex(int,int);
    void printnumber(void){
        cout<<"complex nunmber is "<<a <<"+"<<"i"<<b<<endl;
    }

};
/*complex :: complex(void)//accepts no  parameters
{
    a= 10;b=9;
    cout<<"constructor called"<<endl;
}*/
complex :: complex(int x, int y)//pamerterised constructor,also default just take parameters
{
    a= x;b=y;
    cout<<"constructor called"<<endl;
}
int main()
{
    //implicit call
    complex c1(5,6);
    //explicit call
    complex c2= complex(0,0);
    c1.printnumber();
    c2.printnumber();
     return 0;
}
/**/ 