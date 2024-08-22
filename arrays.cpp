#include<iostream>
using namespace std;
 class atm
 {
    int id[100];
    int amount[100]; 
    int counter;
    public:
    void intcounter(void){counter =0;}
    void setdata(void);
    void getdata(void);

};
void atm ::setdata(void){
    cout<<"Enter the last four digits of your ID ";
    cin>>id[counter];
    cout<<"Enter the amount ";
    cin>>amount[counter];
    counter++;
}
void atm ::getdata(void){
    for(int i=0;i<counter;i++)
    {
        cout<<i+1<<".For "<< id[i]<<" you take out "<<amount[i]<<endl;
    }
}
int main(){
atm local;
local.intcounter();
int n;
cout<<"EACH PERSON GETS MAX 5 TRIES AND CAN ONLY TAKE OUT UPTO 20000"<<endl<<
"Enter how many times you want to take out your money ";
cin>>n;
for(int i =0;i<n;i++){
    local.setdata();
}
local.getdata();
return 0;
}