#include<iostream>
using namespace std;
class student{
    protected:
      string name;
      int rn;
     public:
       void getdetails(){
           cout<<"enter the name:\n";
           cin.ignore();
           getline(cin,name);
           cout<<"enter the roll number:\n";
           cin>>rn;
       }
      void displaydetails(){
          cout<<"name of student: "<<name<<endl;
          cout<<"roll number of student: "<<rn<<endl;
      }
};
class marks:public student{
    protected:
      int sub1;
      int sub2;
    public:
      void getmarks(){
          cout<<"enter the marks of 1st subject:\n";
          cin>>sub1;
          cout<<"enter the marks of subject 2:\n";
          cin>>sub2;
         
      }
      void displaymarks(){
          cout<<"the marks in 1st subject is : "<<sub1<<endl;
          cout<<"the marks in 2nd subject is: "<<sub2<<endl;
      }
      int getsub1(){
          return sub1;
      }
      int getsub2(){
          return sub2;
      }
};
class result: public marks{
    private:
      int totalmarks;
    public:
      void displaytotalmarks(){
          totalmarks=getsub1() + getsub2();
          cout<<totalmarks<<endl;
      }
      void displaystatus(){
          if (totalmarks>40){
              cout<<"passed"<<endl;
          }
          else{
              cout<<"failed"<<endl;
          }
          
      }
     
};
void input(result *s,int size){
    for(int i=0;i<size;i++){
        s[i].getdetails();
        s[i].getmarks();
    }
}
void display(result *s,int size){
    for(int i=0;i<size;i++){
        s[i].displaydetails();
        s[i].displaymarks();
        s[i].displaytotalmarks();
        s[i].displaystatus();
    }
}
int main(){
    int size;
    cout<<"enter the number of students:\n";
    cin>>size;
    result *arr= new result[size];
    input(arr,size);
    display(arr,size);
}
