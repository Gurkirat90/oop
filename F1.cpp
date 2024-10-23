#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Write operation
    ofstream hout("sample.txt"); // Create and open the file
    string st;
    
    cout << "Enter your name: "; // Prompt user for input
    cin >> st; // Read user input
    hout << "my name is " << st; // Write to file
    hout.close(); // Close the file

    // Read operation
    ifstream hin("sample.txt"); // Open the file for reading
    string content;
    
    getline(hin, content); // Read the entire line
    cout << "Content of this file is: " << content << endl; // Output the content
    hin.close(); // Close the file

    return 0;
}
