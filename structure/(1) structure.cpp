#include <iostream>

using namespace std;

// A structure is a collection of multiple data types that can be reffered as  single name.The data items in structure are called memebers,fields or elements.Used to join simple variable to form a complex  variables.
// The structure members are accessed using "Member Access Specifier (.) by creating a structure type varible before".
// A simple variable can store a single variable at a time while a structure variable can store different values at same time.

struct Student
{
 string name;
 int marks,rollno;
};

int main()
{
    Student s; // here "s" is a structure varible
  
  cout<<"\t\t\t Student Entery"<<endl<<endl;
  
  cout<<"Enter Student Name";
  cin>>s.name;
  cout<<"Enter Student Marks";
  cin>>s.marks;
  cout<<"Enter Student Roll No";
  cin>>s.rollno;
  
  cout<<"\t\t\t Student Entery"<<endl<<endl;
  cout<<"Student Name : "<<s.name<<endl<<"Student Marks : "<<s.marks<<endl<<"Student Roll No : "<<s.rollno;
    
    
  
   return 0;
}
















































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



