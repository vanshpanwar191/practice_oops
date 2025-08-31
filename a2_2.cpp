#include<iostream>
using namespace std;
class A{
  int l;
  int b;
  int ar;
  public:
    static void area(A *s,int size){
      
      for(int i=0;i<size;i++){
      
      cout<<"enter the lenght:\n";
      cin>>l;
      
      cout<<"enter the breadth:\n";
      cin>>b;
      ar=(l*b);
      }
    }
   static void display(A *s,int size){
     for(int i=0;i<size;i++){
       cout<<s[i].ar<<"\n";
     }
     
   }
  
};
int main(){
  int n;
  cout<<"enter the number of rectangles:\n";
  cin>>n;
  A s[n];
  A::area(s,n);
  A::display(s,n); 
}
