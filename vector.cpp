#include<iostream>
#include<vector>
using namespace std;
template<class T>
void func(vector<T>v){
   for(int i=0;i<v.size();i++){
     cout<<v.at(i)<<" ";
   }
   cout<<endl;
}
int main(){
    vector<int>vec;
    int size;
    cout<<"Enter the size of the vector\n";
    cin>>size;
    for(int i=0;i<size;i++){
        int n;
        cout<<"Enter the value of the element\n";
        cin>>n;
        vec.push_back(n);
    }
    func(vec);
    return 0;
}