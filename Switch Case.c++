#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks...:"
    cin>>marks;
    switch(marks/10){
        case 10:
        case 9:
           cout<<"Grade A";
           break;
        case 8:
           cout<<"Grade B";
           break;
        case 7:
           cout<<"Grade C";
           break;
        case 6:
           cout<<"Grade A";
           break;
        default:
           if (marks>=0 and marks<60)
             cout:<<"Grade Fail"
            else
            cout:<<"Invalid marks"

    }
    return 0;
    
}