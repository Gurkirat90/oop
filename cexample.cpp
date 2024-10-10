#include<iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int year;
    double interestrate;
    float returnvalue;

    public:
    bankdeposit();
    bankdeposit(int ,int ,int);
    bankdeposit(int,int,double);

    void printoutput(void);

};
bankdeposit :: bankdeposit(int p,int y, int r)
{
    principal =p;
    year =y;
    interestrate =double(r)/100;
    returnvalue = principal;
    for(int i=0;i<y;i++)
    {
        returnvalue =returnvalue*(1+interestrate);
    }

}
bankdeposit :: bankdeposit(int p,int y, double r)
{
    principal = p;
    year = y;
    interestrate = r;
    returnvalue = principal;
    for(int i=0;i<y;i++)
    {
        returnvalue = returnvalue*(1+interestrate);
    }
    

}
void bankdeposit::printoutput()
{
    cout<<"Principal amount was "<<principal<<"\n Return value after "<<year<<" is "<<returnvalue<<endl;
}
int main()
{
    bankdeposit b1,b2,b3;
    b1 = bankdeposit(1000,2,0.04);
    b2 = bankdeposit(10000,2,4);
    b1.printoutput();
    b2.printoutput();

    return 0;
}