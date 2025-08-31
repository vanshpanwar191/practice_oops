#include<iostream>
using namespace std;
class A{
  void display(){
    cout<<"hello"<<"\n";
  }
public:
  void say(){
    string input;
    cout<<"do you want to display?\n";
    
    
    getline(cin,input);
    if(input=="Y"||input=="y"){
      display();
    }
  }
};
int main(){
  A ob;
  ob.say();
  return 0;
}
