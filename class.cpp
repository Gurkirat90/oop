#include<iostream>
using namespace std;
class order
{
    private://private class member
    int detail,mop,bankdetails;//inside class(data members),this will be private by default even without writing private
    public://public class member//you can go through public for private
    int orderID,date,payment;//inside class(data members)
    void setdata(int a,int b,int c);//declaration(inside)//inside class(data functions)
    void getdata()//inside class(data functions)
    {
        cout<<"the details are "<<detail<<"\n";
        cout<<"the method of payment is "<<mop<<"\n";
        cout<<"the bank details are "<<bankdetails<<"\n";
        cout<<"the order ID is "<<orderID<<"\n";
        cout<<"the order date is "<<date<<"\n";
        cout<<"the PAYMENT was of "<<payment<<"\n";
    }
};//semicolon is imp.
void order::setdata(int a1,int a2,int a3)//it can be defined outside
{
    detail =a1 ;mop=a2 ;bankdetails=a3;
}
int main()
{
    order o1;
    o1.orderID=5678;o1.date =121224;o1.payment=3999;
    o1.setdata(12,2,34563762);
    o1.getdata();
    return 0;
}