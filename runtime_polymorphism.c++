// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class animal{
public:
    virtual void sound(){
        cout<<"Animal sound"<<endl;
        
    }
    virtual void eat(){
        cout<<"Animal eating"<<endl;
    }
};
class dog:public animal{
public:
    void sound() override{
        cout<<"Bark"<<endl;
    }
    void eat() override{
        cout<<"Dog food"<<endl;
    }
};

class cat:public animal{
public:
    void sound() override{
        cout<<"Meow"<<endl;
        
    }
    void eat() override{
        cout<<"Cat food"<<endl;
    }
};

int main(){
    animal *ptr;

    dog d;
    cat c;
    
    ptr=&d;
    ptr->sound();
    ptr->eat();


    ptr=&c;
    ptr->sound();
    ptr->eat();

    return 0;


}