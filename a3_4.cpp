#include<iostream>
using namespace std;
class A{
    int p;
    int q;
    public:
      void getdata(int a,int b){
          p=a;
          q=b;
      }
      void show(){
          cout<<"the data is:"<<p<<" "<<q;
      }
};
int main(){
    A *arr=new A[6];
    for(int i=0;i<6;i++){
        int t;
        int s;
        cout<<"enter the numbe you want to see:\n";
        cin>>t>>s;
        (arr+i)->getdata(t,s);
    }
    for(int i=0;i<6;i++){
       (arr+i)->show();
    }
}
