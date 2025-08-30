#include<iostream>
using namespace std;
class temp{
  int t;
  public:
    void input(){
      cout<<"enter the temperature in celsius:\n";
      cin>>t;
    }
    
    void calcd(){
      int F=((9*t)/5)+32;
      cout<<F;
    }
};
int main(){
  temp ob;
  ob.input();
  ob.calcd();
  
  
}
