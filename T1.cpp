// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
template<class T>
class vector
{
    public:
    T * arr;int size;
    vector(int m)
    {
        size=m;
        arr= new T[size];
    }
    T dotproduct(vector &v){
        T d=0;
        for(int i=0;i<size;i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main(){
    vector<double>v1(3);
    vector<double>v2(3);
    v1.arr[0]=1.2;
    v1.arr[1]=2.6;
    v1.arr[2]=3.5;
    v2.arr[0]=4.7;
    v2.arr[1]=5.8;
    v2.arr[2]=6.0;
    cout<< v1.dotproduct(v2);
    return 0;
}
