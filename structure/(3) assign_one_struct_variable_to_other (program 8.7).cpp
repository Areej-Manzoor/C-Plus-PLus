#include <iostream>

using namespace std;

// Structure Example :Program 8.7 from it series c++ book | page:253

// A structure variable can be assigned to another structure variable the same way a simple variable is assigned to anothwer variable 
struct Student
{
int marks;
char grade;
};

int main()
{
   Student s1,s2;
    
  cout<<"Assigning the value of one structure varioable to another variable"<<endl<<endl;
  
  cout<<" Entyer Student Marks : ";
  cin>>s1.marks;
  cout<<"Entyer Student Marks : ";
  cin>>s1.grade;
  
  s2=s1; // s1 is assigned to s2 ,so each values of each s1 member will be assigned to s2 and the result will be same
  
  cout<<endl;
  cout<<"First Record"<<endl;
  cout<<"Marks :"<<s1.marks<<endl<<"Grade :"<<s1.grade<<endl<<endl;
  cout<<"Second Record"<<endl;
  cout<<"Marks :"<<s2.marks<<endl<<"Grade :"<<s2.grade<<endl;
 
   return 0;
}
















































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



