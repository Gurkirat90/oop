//this code is wrong
#include<iostream>
#include<string>
using namespace std;
class Class
{
    char student[10];
    int roll;
    
    public:

    void getdata(void);
    void showdata(void);
};
void Class::getdata(void)
{
    cout<<"enter the name of student"<<endl;
    cin>>student[10];
    cout<<"enter th eroll no. of that student"<<endl;
    cin>>roll;

}
void Class::showdata(void)
{
    cout<<"list of students are as follows \n"<<student<<" roll no. = "<<roll<<endl;
}

int main()
{
    int size = 3;
    Class a[size];
    for(int i=0;i<=size-1;i++){
        a[i].getdata();
    }
    for(int i=0;i<=size-1;i++){
        a[i].showdata();
    }
    return 0;
}
