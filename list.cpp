#include<iostream>
#include<list>
using namespace std;
void display(list<int>l){
    list<int>::iterator iter;
    for(iter=l.begin();iter!=l.end();iter++){
        cout<<*(iter)<<" ";
    }
}
int main(){
    list<int> l(4);
    list<int>::iterator iter;
    for(iter=l.begin();iter!=l.end();iter++){
        int n;
        cout<<"push an element\n";
        cin>>n;
        *iter=n;
    }
    list<int> l2(3,5);
    l.merge(l2);
    display(l);
}