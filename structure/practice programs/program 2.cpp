#include <iostream>

using namespace std;

// PROBLEM :An array stores details of 25 students (rollno, name, marks in three subject). Write a program to create such an array and print out a list of students who have failed in more than one subject.

struct Student
{
    int rno;
    char name[50];
    int marks1,marks2,marks3;
    
};


int main()
{
    Student s[2];
    for(int i=0;i<25;i++)
    {
        cout<<i<<endl;
        cout<<"Enter student name :";
        cin>>s[i].name;
        cout<<"Enter student roll no :";
        cin>>s[i].rno;
        cout<<"Enter subject 1 marks :";
        cin>>s[i].marks1;
        cout<<"Enter subject 2 marks :";
        cin>>s[i].marks2;
        cout<<"Enter subject 3 marks :";
        cin>>s[i].marks3;
        
    }
    
    cout<<endl<<endl;
    cout<<"Details of students who have failed in more than one subjects "<<endl;
     for(int i=0;i<25;i++)
    {
      if((s[i].marks1<40 && s[i].marks2<40 ) || (s[i].marks2<40 && s[i].marks3<40 ) || (s[i].marks3<40 && s[i].marks1<40 ))
      {
          cout<<"Student : "<<i+1<<endl;
          cout<<"Student Name : "<<s[i].name<<endl;
          cout<<"Student Roll No : "<<s[i].rno<<endl;
          cout<<"Subject 1 Marks : "<<s[i].marks1<<endl;
          cout<<"Subject 2 Marks : "<<s[i].marks2<<endl;
            cout<<"Subject 3 Marks : "<<s[i].marks3<<endl;
      }
        
    }
    
}








































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



