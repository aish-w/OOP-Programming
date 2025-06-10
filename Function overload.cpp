#include<iostream>
using namespace std;
class Sum{
    public:
    void add(int x,int y){
        int s=x+y;
        cout<<s<<endl;
    }
    void add(int x,int y,int z){
        int s=x+y+z;
        cout<<s<<endl;
    }
    void add(float x,float y){
        float s=x+y;
        cout<<s<<endl;
    }
};
int main(){
    Sum s;
    s.add(2,3);
    s.add(2,3,4);
    s.add(float(3.4),float(5.9));
    return 0;
}