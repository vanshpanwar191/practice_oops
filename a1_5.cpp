#include<iostream>
using namespace std;
class student {
  string name;
  int rn;
  string deg;
  string hostel;
  int cg;
  public:
    void adddetails(student *n,int size){
      for(int i=0;i<size;i++){
          cout<<"enter the name:\n";
          cin.ignore();
          getline(cin,n[i].name);
          cout<<"enter the roll number:\n";
          cin>>n[i].rn;
          cout<<"enter the degree:\n";
          cin.ignore();
          getline(cin,n[i].degree);
          cout<<"enter the hostel:\n";
          cin.ignore();
          getline(cin,n[i].hostel);
          cout<<"enter the cg:\n";
          cin>>n[i].cg;
          
        }
         
      
    }
  
};
int main(){
  int size;
  cout<<"enter the number of students:\n";
  cin>>size;
  student s[n];
  
}

