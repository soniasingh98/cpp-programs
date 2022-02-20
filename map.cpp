#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> marksMap;
    marksMap["Harry"]=89;
    marksMap["Sonia"]=80;
    marksMap["oehin"]=9;
    for(auto i:marksMap){
        cout<<i.first<<" "<<i.second<<endl;
    }
    marksMap.insert({{"kfid",849},{"jgj",78}});
    for(auto i:marksMap){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}