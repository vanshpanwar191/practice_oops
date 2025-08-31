#include<iostream>
using namespace std;
class A{
  static int a;
  static int b;
  static int add;
  public:
    static void get();
    static void dis();
    
      
    

};
int A::a;
int A::b;
int A::add;
 void A::get(){
      cout<<"enter the number a:\n";
      cin>>a;
      cout<<"enter the number b:\n";
      cin>>b;
      add=a+b;
      
    }
void A::dis(){
    cout<<add;
    
    
}
int main(){

  A::get();
  A::dis();
}
