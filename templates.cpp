#include<iostream>
using namespace std;

//1st EXAMPLE

// template<class T>
// class Vector{
//     T a;
//     public:
//     Vector(T a){
//         this->a=a;
//     }
//     void display(){
//         cout<<"The value of a is "<<a<<endl;
//     }
// };

//2nd EXAMPLE

template<class T>
class dot{
    public:
    T *arr;
    int size;
    dot(int a){
        size=a;
        arr=new T[size];
    }
    T dotproduct(dot &d){
        T dp=0;
        for(int i=0;i<size;i++){
            dp+=this->arr[i]*d.arr[i];
        }
        return(dp);
    }
};
int main(){
    // Vector<char>vec('H');
    // vec.display();
    dot<float>obj(3);
    obj.arr[1]=1.1;
    obj.arr[2]=0.1;
    obj.arr[3]=2.2;
    dot<float>obj1(3);
    obj1.arr[1]=0;
    obj1.arr[2]=1.1;
    obj1.arr[3]=0;
    float b=obj.dotproduct(obj1);
    cout<<b<<endl;
return 0;
}