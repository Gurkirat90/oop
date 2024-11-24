//multiple parameters
#include <iostream>
using namespace std;
template<class T1,class T2>
class myclass
{
    public:
    T1 data1;
    T2 data2;
    myclass(T1 d,T2 d1)
    {
        data1=d;
        data2=d1;
    }
    void add(){cout<<"-> "<<data1+data2;}
    
    
    void display()
    {
        cout<<this->data1<<" "<<this->data2;
    }
};
int main()
{
    myclass<double,int>obj(1.993,1);
    obj.display();
    obj.add();
}
//default parameters
/*
#include <iostream>
using namespace std;
template<class T1= int,class T2= float,class T3= char>
class myclass
{
    public:
    T1 data1;
    T2 data2;
    T3 data3;
    myclass(T1 d,T2 d1,T3 d2)
    {
        data1=d;
        data2=d1;
        data3=d2;
        
    }    
    void display()
    {
        cout<<data1<<" "<<data2<<" "<<data3;
    }
};
int main()
{
    myclass<> obj(1,2.0,'L');
    myclass<char,char,int>obj2('f','d',2);
    obj2.display();
}
*/
