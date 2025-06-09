#include<iostream>
using namespace std;


class Fruit{           //class
    //properties
    public:
    string name;
    string color;

};
int main(){
    Fruit apple;  //object
    apple.name="Apple";
    apple.color="Red";
    cout<<apple.name<<"-"<<apple.color<<endl;

    Fruit *mango=new Fruit(); //new way of creation of object
    mango->name="Mango";
    mango->color="Yellow";
    cout<<mango->name<<"-"<<mango->color<<endl;
    return 0;
}