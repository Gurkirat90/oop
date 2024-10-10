//destructor nerver take an argument and
// never returns any value.

#include <iostream>
using namespace std;

int count = 0;

class number {
    int a;
public:
    // Constructor
    number() : a(0) { // Initialize `a` to 0
        count++;
        cout << "This is the time when constructor is called for object number" << count << endl;
    }

    // Destructor
    ~number() {
        cout << "This is the time when destructor is called for object number" << count << endl;
        count--;
    }

    // Method to display the value of `a`
    void display() const {
        cout << "Number in object is " << a << endl;
    }
};

int main() {
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    number n1;
    {
        cout << "Entering this block" << endl; // Added newline
        cout << "Creating two more objects" << endl;
        number n2, n3;
        cout << "Exiting this block" << endl; // Added newline
    }
    return 0;
}
/*
We are inside our main function
Creating first object n1
This is the time when constructor is called for object number1
Entering this block
Creating two more objects
This is the time when constructor is called for object number2
This is the time when constructor is called for object number3
Exiting this block
This is the time when destructor is called for object number3
This is the time when destructor is called for object number2
This is the time when destructor is called for object number1
*/
