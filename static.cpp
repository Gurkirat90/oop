#include<iostream>
using namespace std;
class loop
{
    int x;
    static int i;//cannnot declare its value here(only defination)static data members
    public:
    void getdata(void)
    {
        cout<<"how many times you want to run a loop"<<"\n";
        cin>>x;
        i++;
    };
    void printdata(void)
    {
        cout<<"this loop will run "<<x<<" with th evalue of int being "<<i<<endl;
    };
    static void printd(void)//static data function
    {
        //code
        //can access only static data members not any other data members or funtions
    }

};
int loop:: i;//right method to declare it (assigning of value van be done here) 
int main()
{
    loop l1,l2,l3,l4;
    l1.getdata();
    l2.getdata();
    l3.getdata();
    l4.getdata();
    l1.printdata();l2.printdata();l3.printdata();l4.printdata();
    return 0;
}