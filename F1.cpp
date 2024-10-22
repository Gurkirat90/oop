#include<iostream>
#include<fstream>
//the useful classes for working in cppar:
//1.fstreambase class
//2.ifstream class->derived from fstreambase
//3.ofstream class->derived from fstreambase
//inorder to work with files in cpp,you will have to open it
//there are 2 ways to open it
//1.using the constructor
//2.using the member function open() of class
using namespace std;
int main()
{
  string st ="Garry Bhai";
  string st2;
  // //opening files using constructor and writing it
  // ofstream out("sample.txt");//write operation
  // out<<st;
  //opening file using constructor and reading it
  ifstream in("sample1.txt");//read operations
  //in>>st2;//this will give only first word of the statement
  getline(in,st2);//entire statement
  getline(in,st2);//entire next statement
  cout<<st2;
  
  return 0;
}
