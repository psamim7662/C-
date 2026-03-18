// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 

class student{
private:
    int rollno;

public:
   student(){
       rollno=0;//Default constructor
       cout<<"Default constructor called:"<<endl;
       
   }
   void display(){
       cout<<"Roll no..:"<<rollno<<endl;
   }
};
int main(){
    student s1;
    s1.display();
    
    return 0;
}