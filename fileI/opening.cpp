#include<iostream>
#include<fstream>
// #include<string>
using namespace std;
int main(){
    ofstream out;
    out.open("sample.txt");
    out<<"What if i told you that i need you";
    out.close();
    string s;
    ifstream in;
    in.open("sample1.txt");
    while(in.eof()==0){
        getline(in,s);
           cout<<s<<endl;
    }
 
    in.close();
    return 0;
}