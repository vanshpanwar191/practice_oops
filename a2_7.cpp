#include<iostream>
using namespace std;
class A{
  int a;
  int b;
  int mul;
  public:
  const void multiply(){
    cout<<"enter the 1st number:\n";
    cin>>a;
    cout<<"enter the 2nd number:\n";
    cin>>b;
    mul=a*b;
    cout<<mul;
     
  }
};
int main(){
  A ob;
  ob.multiply();
}
