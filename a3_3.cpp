#include<iostream>
using namespace std;
class A{
   A(){
      cout<<"constructor";
   }
   ~A(){
      cout<<"destructor";
   }  
/*   ~A(){
     cout<<"destructor 1";
   }*/ // not more than 1 destructor

  /* ~A(int a) { cout<<"destructor";} */ //destructors cant have arguments//
 


};
int main(){
  A ob;
  
}
