// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// int main() {
    
    class Base{
    public:
        virtual void show(){
            cout<<"Base_class_show"<<endl;
        }
    };
    class Derived:public Base{
    public:
        void show() override{
            cout<<"Derived class show"<<endl;
        }
    };
    int main(){
        Base *ptr;
        Derived d;
        ptr=&d;
        ptr->show();
    }
// }