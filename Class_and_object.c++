// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

class student{//class
private:
   int rollno;
   string name;
   float marks;
public:
  void setdata(int r,string n,float m)
  {
      rollno=r;
      name=n;
      marks=m;
  }
  void display(){
      cout<<"Roll no:"<<rollno<<endl;
      cout<<"Name:"<<name<<endl;
      cout<<"marks:"<<marks<<endl;
  }
  float getmarks(){
      return marks;
  }
};

int main(){
    student s1;//object
    s1.setdata(101,"Samim",89.5);
    s1.display();
    cout<<"Marks using getter..:"<<s1.getmarks()<<endl;
    
    return 0;
}

