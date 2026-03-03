// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n=5,i=1,fact=1;
    while(i<=n){
    fact=fact*i;
    i++;
}
    cout<<"Factorial is :"<<fact;
    return 0;
}