#include <iostream>
using namespace std;

class Kirana
{
    int id;
    float price;

public:
    void setdata(int x, float y)
    {
        id = x;
        price = y;
    }
    void getdata()
    {
        cout << "The item id is " << id << endl;
        cout << "The item price is " << price << endl;
    }
};

int main()
{
    Kirana *p=new Kirana[3];
    for(int i=0;i<3;i++){
        int identity;
        float pr;
        cout<<"Enter id and price of an item\n";
        cin>>identity>>pr;
        (p+i)->setdata(identity,pr);
    }
    for(int i=0;i<3;i++){
       (p+i)->getdata();
    }
    return 0;
}