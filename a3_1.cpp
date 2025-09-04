#include<iostream>
using namespace std;
class rectangle{
    int length;
    int breadth;
    public:
        rectangle(){
          length=0;
          breadth=0;
        }
        rectangle(int a,int b){
          length=a;
          breadth=b;
        }
        rectangle(int a){
          length=a;
          breadth=a;
        }
        void area(){
          int ar=length*breadth;
          cout<<ar;
        }
    
};
int main(){
  rectangle ob,ob1(4,5),ob2(6);
  ob.area();
  cout<<"\n";
  ob1.area();
  cout<<"\n";
  ob2.area();
  cout<<"\n";
}
