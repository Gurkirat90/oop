#include<iostream>
#include<string>
using namespace std;

class binary {
    string s;
public:
    void read(void);
    void check(void);
    void ones(void);
    void disp(void);
};
void binary :: disp(void) {
    cout << "The flipped binary number is: ";
    for(int i = 0; i < s.length(); i++) {
        cout << s.at(i);
    }
    cout << "\n";
}

void binary :: read(void) {
    cout << "Enter the binary number" << "\n";
    cin >> s;
}

void binary :: check(void) {
    for(int i = 0; i < s.length(); i++) {
        if(s.at(i) != '0' && s.at(i) != '1') {
            cout << "Not a binary number" << "\n";
            exit(0);
        }
    }
}

void binary :: ones(void) {
    for(int i = 0; i < s.length(); i++) {
        if(s.at(i) == '0') {
            s.at(i) = '1';
        } else {
            s.at(i) = '0';
        }
    }
}



int main() {
    binary b;
    b.read();
    b.check();
    b.disp();
    b.ones();
    b.disp();
    return 0;
}