#include<iostream>
using namespace std;
class First{
    int a,b;
    public:
    First(int x,int y):a(x),b(y){
        cout<<"constructor invoked\n";
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
    }
};
int main(){
    First(3,6);
    return 0;
}