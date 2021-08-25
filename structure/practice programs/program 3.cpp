#include <iostream>

using namespace std;

// PROBLEM :Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 2..

struct Student
{
    int rno,age;
    char name[50];
    
    
};


int main()
{
    Student s[2];
    for(int i=0;i<5;i++)
    {
        
        cout<<"Enter "<<i+1<<" student name :";
        cin>>s[i].name;
        cout<<"Enter"<<i+1<<" student age :";
        cin>>s[i].age;
        s[i].rno=i+1;
      
        
    }
    
    cout<<endl<<endl;
    cout<<"Details of students whos roll no is 2 "<<endl;
     for(int i=0;i<5;i++)
    {
      if(s[i].rno==2)
      {
          cout<<"Student Name : "<<s[i].name<<endl;
          cout<<"Student Roll No : "<<s[i].rno<<endl;
          cout<<"Subject Age : "<<s[i].age<<endl;
      }
        
    }
    
}








































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



