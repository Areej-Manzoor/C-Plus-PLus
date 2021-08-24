#include <iostream>

using namespace std;

// Structure Example :Program 8.10 from it series c++ book | page:258

// A structure in another structure is called nested structure same as nested if
struct Reuslt
{
 int marks;
 char grade;
};

struct Record
{
  int rno;
 struct Reuslt r;
};

int main()
{
Record rec;
  
  
  cout<<"Enter Roll No :" ;
  cin>>rec.rno;
  cout<<"Enter Marks :" ;
  cin>>rec.r.marks;
  cout<<"Enter Grade :" ;
  cin>>rec.r.grade; 
 
    
cout<<endl<<endl;
cout<<"The details are as follows :"<<endl;
cout<<"Roll no : "<<rec.rno<<endl;
cout<<"Marks : "<<rec.r.marks<<endl;
cout<<"Grade :"<<rec.r.grade;
    
  
   return 0;
}
















































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



