#include<iostream>
using namespace std;
struct student{
  int rn;
  string deg;
  string hostel;
  int cg;
};
  void adddetails(student *n,int size){
    for(int i=0;i<size;i++){
      cout<<"enter the roll number:\n";
      cin>>n[i].rn;
      cout<<"enter the degree:\n";
      cin.ignore();
      getline(cin,n[i].deg);
      cout<<"enter the hostel:\n":
      cin.ignore();
      getline(cin,n[i].hostel);
      cout<<"enter the cg:\n";
      cin>>n[i].cg;
      }
  }
  void updatedetails(student *n,int size){
    for(int i=0;i<size;i++){
      
      cout<<"enter the new roll  number:\n";
      cin>>n[i].rn;
      cout<<"enter the new degree:\n";
      cin.ignore();
      getline(cin,n[i].deg);
      cout<<"enter the new hostel:\n":
      cin.ignore();
      getline(cin,n[i].hostel);
      cout<<"enter the new cg:\n";
      cin>>n[i].cg;
    }
      
    }
     void updatecg(student  *n,int size){
      for(int i=0;i<size;i++){
        if(n[i].rn==t){
          int nc;
          cout<<"enter the new cgpa:\n";
          cin>>nc;
          n[i].cg=nc;
        }
      void updatehostel(int *n,int size,int t){
      for(int i=0;i<size;i++){
        if(n[i].rn==t){
          string nh;
          cout<<"enter the new hostel:\n";
          cin.ignore();
          getline(cin,nh);
          n[i].hostel=nh;
        }
    void displaydetails(student *n,int size){
    for(int i=0;i<size;i++){
      cout<<n[i].rn;
      cout<<n[i].deg;
      cout<<n[i].hostel;
      cout<<n[i].cg;
    }
  }
int main(){
  int size;
  cout<<"enter the number of students whose details you want to add:\n";
  cin>>size;
  student n[size];
 adddetails(student*n,int size)
  char input3;
  cout<<"do you want to update the details ?: Y/N\n";
  cin>>input3;
  if (input3=='Y'){
   updatedetails(student *n,int size)
  }
  else{
    cout<<"ok";
  }
  char input;
  cout<<"do you want to update the cgpa?: Y/N\n";
  cin>>input;
  if (input=='Y'){
    int t;
    cout<<"enter the roll number of student:\n";
    cin>>t;
   updatecg(student *n,int size)
  }
  else{
    cout<<"ok";
  }
  char input2;
  cout<<"do you want to update the hostel?: Y/N\n";
  cin>>input2;
  if (input2=='Y'){
    int t;
    cout<<"enter the roll number of student:\n";
    cin>>t;
    updatehostel(student *n,int size,int t)
    
  }
  else{
    cout<<"ok";
  }
   displaydetails(student *n,int size)
}
