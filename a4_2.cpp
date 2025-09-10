#include<iostream>
using namespace std;
class get{
    public:
    int a;
    get(int i){
        a=i;
    }
};
class square:public get{
    public:
    square(int i):get(i) {}
    int ss(){
        int sq=a*a;
        return sq;
    }
};
class cube:public get{
    public:
    cube(int i):get(i) {}
    int cc(){
        int cu=a*a*a;
        return cu;
    }
};
int main(){
    square a(8);
    cube b(7);
    cout<<"the value of cube is "<< " "<<b.cc();
    cout<<"the value of square us "<<" "<<a.ss();
}
