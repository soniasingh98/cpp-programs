#include<iostream>
using namespace std;
template<class T1,class T2>
class me{
    T1 data1;
    T2 data2;
    public:
    me(T1 a,T2 b){
        data1=a;
        data2=b;
    }
    void display(){
        cout<<data1<<" "<<data2<<endl;
    }
};
int main(){
    me<float,char>sonia(4.5,'s');
    sonia.display();
    return 0;
}