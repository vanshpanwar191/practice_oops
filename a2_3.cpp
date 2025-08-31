#include<iostream>
using namespace std;
int x=10;
class A{
  int x=5;
 
  public:
  static int t;
  
   void display();
  
};
void A::display(){
  cout<<"hey"<<"\n";
  cout<<"x="<<x<<"\n";
  cout<<"x="<<::x<<"\n";
  
  
   
}
static int t=6;
int main(){
  A ob;
  ob.display();
  cout<<"t="<<t;
}
