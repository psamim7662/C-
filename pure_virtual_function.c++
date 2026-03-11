// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Shape{
public:
    virtual void draw()=0;//pure virtual function
    virtual double area()=0;
};
class Circle: public Shape{
    double radius;
public:
    void draw() override{
        cout<<"Drawing circle"<<endl;
    }
    double area() override{
        return 3.14 * radius * radius;
    }
};



// int main() {
//     // Write C++ code here
//     std::cout << "Try programiz.pro";

//     return 0;
// }