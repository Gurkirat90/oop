//the things writeen below is subtraction of complex numbers
//passing of objects as arguments
#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void set(int a1,int b1)
    {
        a=a1;
        b=b1;
    };
    void sum(complex c1,complex c2)
    {
        a= c1.a-c2.a;
        b= c1.b-c2.b;
    };
    void output(void);

};
void complex ::output(void)
{
    cout<<"complex vector will be"<<a<<"+"<<b<<"i"<<endl;

}

int main()
{
    complex c1,c2,c3;
    c1.set(90,100);
    c2.set(-90,-10);
    c3.sum(c1,c2);
    c3.output();
    return 0;

}