#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={3,5,4,6,2};
sort(arr,arr+5);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
sort(arr,arr+5,greater<int>());
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
}
