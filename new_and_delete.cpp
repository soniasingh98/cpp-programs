#include<iostream>
using namespace std;
int main(){
    int *p=new int(9);
    cout<<"The value of int is "<<*p<<endl;
    delete(p);
    cout<<"The value of int is "<<*p<<endl;
    int *arr=new int[4];
    cout<<"Enter the value of elements of an array:\n";
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    cout<<"Your array is:\n";
     for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    delete[](arr);
     cout<<"Your array is:\n";
     for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}