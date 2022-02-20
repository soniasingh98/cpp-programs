#include<iostream>
using  namespace std;
// class Base{
//     public:
//     int var_base;
//     virtual void display(){
//         cout<<"The value of var_base is: "<<var_base<<endl;
//     }
// };
// class Derived:public Base{
//     public:
//     int var_derived;
//     void display(){
//         cout<<"The value of var_base is: "<<var_base<<endl;
//         cout<<"The value of var_derived is: "<<var_derived<<endl;
//     }
// };

class Sonia{
    protected:
    string name;
    float rating;
    public:
    Sonia(){}
    Sonia(string s,float r){
        name=s;
        rating=r;
    }
    virtual void display()=0;
};

class video:public Sonia{
    float videolength;
    public:
    video(){}
    video(string s,float r,float l):Sonia(s,r){
        videolength=l;
    }
    void display(){
        cout<<"The name of this video is: "<<name<<endl;
        cout<<"The rating of this video is: "<<rating<<endl;
        cout<<"The length of this video is: "<<videolength<<endl;
    }
};

class text:public Sonia{
    int words;
    public:
    text(){}
    text(string s,float r,int w):Sonia(s,r){
        words=w;
    }
    void display(){
        cout<<"The name of this text tutorial is: "<<name<<endl;
        cout<<"The rating of this text tutorial is: "<<rating<<endl;
        cout<<"The words in this text tutorial is: "<<words<<endl;
    }
};

int main(){
// Base *base_pointer;
// Derived derived_obj;
// base_pointer=&derived_obj;
// base_pointer->var_base=89;
// base_pointer->display();
Sonia *p[2];
video video_obj("Html tut",4.6,6.6);
text text_obj("html text",3.9,89);
p[0] = &video_obj;
p[1] = &text_obj;
p[0]->display();
return 0;
};