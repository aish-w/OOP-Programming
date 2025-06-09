//Single Inheritance

// #include<iostream>
// using namespace std;
// class Parent {
//     public:
//     Parent() {
//         cout << "Parent class" << endl;
//     }
// };
// class Child:public Parent{
//     public:
//     Child(){
//         cout<<"Child class" << endl;
//     }
// };
// int main() {
//     Child c;
//     return 0;
// }

//Multilevel Inheritance

// #include<iostream>
// using namespace std;
// class Parent {
//     public:
//     Parent() {
//         cout << "Parent class" << endl;
//     }
// };
// class Child:public Parent{
//     public:
//     Child(){
//         cout<<"Child class" << endl;
//     }
// };
// class GrandChild:public Child{
//     public:
//     GrandChild(){
//         cout<<"GrandChild class" << endl;
//     }
// };
// int main() {
//     GrandChild gc;
//     return 0;
// }

//Multiple Inheritance

// #include<iostream>
// using namespace std;
// class Parent1{
//     public:
//     Parent1() {
//         cout << "Parent1 class" << endl;
//     }
// };
// class Parent2{
//     public:
//     Parent2() {
//         cout << "Parent2 class" << endl;
//     }
// };
// class Child:public Parent1, public Parent2{
//     public:
//     Child(){
//         cout<<"Child class" << endl;
//     }
// };
// int main() {
//     Child c;
//     return 0;
// }

//Hierarchical Inheritance
#include<iostream>
using namespace std;
class Parent {
    public:
    Parent() {
        cout << "Parent class" << endl;
    }
};
class Child1:public Parent{
    public:
    Child1(){
        cout<<"Child1 class" << endl;
    }
};
class Child2:public Parent{
    public:
    Child2(){
        cout<<"Child2 class" << endl;
    }
};
int main() {
    Child1 c1;
    Child2 c2;
    return 0;
}