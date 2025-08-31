#include<iostream>
using namespace std;
int x=10;
class A{
    
 public:
  static int x;
  int x=6;
  void display(){
    cout<<"local x="<<this->x<<"\n";
    cout<<"global x="<<::x<<"\n";
    cout<<"static x="<<A::x<<"\n";
    
  }  
};
int A::x=5;
int main(){
  A ob;
  ob.display();

}

