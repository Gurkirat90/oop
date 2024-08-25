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
    friend complex subc(complex q1,complex q2);
    void output(void);

};

complex subc(complex q1,complex q2){
    complex q3;
    q3.set(q1.a-q2.a,q1.b-q2.b);
    return q3;

}
void complex ::output()
{
    cout<<"complex vector will be"<<a<<" + "<<b<<"i"<<endl;

}

int main()
{
    complex c1,c2,sub;
    c1.set(90,100);
    c2.set(-90,-10);
   sub = subc(c1,c2);
   sub.ouput();
   return 0;

}