#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string st="whlajfio";
    ofstream out("sample.txt");
    out<<st;
    string s;
    ifstream in("sample1.txt");
    getline(in,s);
    cout<<s;
}
