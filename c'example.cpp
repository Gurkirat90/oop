#include <iostream>
using namespace std;

class bankdeposit {
    int principal;
    int year;
    double interestrate;
    double returnvalue; // Changed from float to double

public:
    bankdeposit(int p, int y, int r);   // Constructor for integer interest rate
    bankdeposit(int p, int y, double r); // Constructor for double interest rate

    void printoutput() const; // Marked as const since it does not modify class state
};

bankdeposit::bankdeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestrate = double(r)/100;
    returnvalue = principal;
    for (int i = 0; i < year; ++i) {
        returnvalue *= (1 + interestrate);
    }
}

bankdeposit::bankdeposit(int p, int y, double r)
{
    principal = p;
    year = y;
    interestrate =r;
    returnvalue = principal;
    for (int i = 0; i < year; ++i) {
        returnvalue *= (1 + interestrate);
    }
}

void bankdeposit::printoutput() const {
    cout << "Principal amount was " << principal 
         << "\nReturn value after " << year << " years is " << returnvalue << endl;
}

int main() {
    bankdeposit B1(100, 1, 0.05); // Constructor with double interest rate
    bankdeposit B2(100, 1, 5);   // Constructor with integer interest rate

    B1.printoutput();
    B2.printoutput();

    return 0;
}