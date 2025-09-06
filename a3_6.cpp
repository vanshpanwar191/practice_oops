#include<iostream>
using namespace std;\
class B;
class A{
    int a;
    public:
      void setdata(int j){
          a=j;
      }
      
      friend void add(A&,B&);
};
class B{
    int b;
    public: 
      void setdata(int j){
          b=j;
      }
      friend void add(A&,B&);
};
void add(A &x, B&y){
    int add=x.a+y.b;
    cout<<add;
}
int main(){
    int p,q;
    cout<<"enter the numbers you want to add:\n";
    cin>>p>>q;
    A ob;
    ob.setdata(p);
    B ob1;
    ob1.setdata(q);
    add(ob,ob1);
}
