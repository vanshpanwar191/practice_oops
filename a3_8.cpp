#include<iostream>
using namespace std;
class A{
    int a;
    int b;
    public:
       A(){
           a=10;
           b=20;
       }
       void show(){
           cout<<"the data is: "<<a<<" "<<b;
           
       }
    
    
};
int main(){
    A *ptr= new A;
    (ptr)->show();
    delete ptr;
}
