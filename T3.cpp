#include<iostream>
using namespace std;
template<class T>
class num
{
    T number;
    public:
    T input();
    
    void display()
    {
        cout<<number<<endl;
    }
    T operator+(num &obj2)
    {
        T d;
        d=number+obj2.number;
        return d;
    }
};
template<class T>
T num<T> :: input()
{
    cin>>number;
    return number;
}

int main()
{
    num<int>obj1;
    num<int>obj2;
    obj1.input();
    obj2.input();
    obj1.display();
    obj2.display();
    int a;
    a=obj1+obj2;
    cout<<a;
    return 0;
}
