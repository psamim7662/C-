// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int factorial(int n){
    if (n<=1)
      return 1;
    else 
       return n*factorial(n-1);
    
    
}
int main(){
    cout<<"Factorial :"<<factorial(5);
    return 0;
    
}