#include<iostream>
using namespace std;
template<class T1=int,class T2=float>
class DefArg{
    T1 a;
    T2 b;
    public:
    DefArg(T1 x,T2 y){
     a=x;
     b=y;
    }
    void display();
};
template<class T1,class T2>
void DefArg<T1,T2>::display(){
        cout<<"data1= "<<a<<endl;
        cout<<"data2= "<<b<<endl;
    }
template<class T>
void swapp(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    DefArg<>da(5,5.56);
    da.display();
    int x=6;
    int y=8;
    swapp(x,y);
    cout<<x<<" "<<y;
    return 0;
}
