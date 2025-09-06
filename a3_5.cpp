#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
      A(){
          a=10;
      }
      friend void exc(A&,B&);
      
};
class B{
    int b;
    public: 
      B(){
          b=20;
      }
      friend void exc(A&, B&);
      
    
};
void exc(A &x,B &y){
    int temp=x.a;
    x.a=y.b;
    y.b=temp;
    cout<<x.a<<" "<<y.b;
}
int main(){
    A obj1;B obj2;
    exc(obj1,obj2);
}
