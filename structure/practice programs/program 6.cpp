#include <iostream>


using namespace std;

// PROBLEM :Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). Store the information of the students.
// 1 - Write a function to print the names of all the students having age 14.
// 2 - Write another function to print the names of all the students having even roll no.
// 3 - Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).

struct Student
{
    int rno,age;
    char name[50];
};

void point1(Student s[11])
{
int age_counter=0;
   cout<<endl;
   cout<<"------------------------------------------"<<endl;
   cout<<"Details of students between having age 14 "<<endl;
   cout<<"------------------------------------------"<<endl;
     for(int i=0;i<11;i++)
    {
      if(s[i].age==14)
      {
          cout<<"Student : "<<i+1<<endl;
          cout<<"Student Name : "<<s[i].name<<endl;
          cout<<"Student Roll No : "<<s[i].rno<<endl;
          cout<<"Subject Age : "<<s[i].age<<endl;
          age_counter++;
      }
     
        
    }
     if(age_counter==0)
      {
          cout<<"No student found whose roll no is 14";
      }

}    

void point2(Student s[11])
{ 
    int rno_counter=0;
    cout<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"Details of students having even roll no's "<<endl;
    cout<<"-----------------------------------------"<<endl;
     for(int i=0;i<11;i++)
    {
      if((s[i].rno%2)==0)
      {
          cout<<"Student : "<<i+1<<endl;
          cout<<"Student Name : "<<s[i].name<<endl;
          cout<<"Student Roll No : "<<s[i].rno<<endl;
          cout<<"Subject Age : "<<s[i].age<<endl;
          rno_counter++;
      }
    
        
    }
     if(rno_counter==0)
      {
          cout<<"No student found having even roll no";
      }
    
} 

void point3(Student s[11],int find)
{   
    cout<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<"Details of students whose roll no is given (i.e. roll no. entered by the user) "<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
    for(int i=0;i<11;i++)
    {
        if(s[i].rno==find)
        {
           cout<<"Student : "<<i+1<<endl;
          cout<<"Student Name : "<<s[i].name<<endl;
          cout<<"Student Roll No : "<<s[i].rno<<endl;
          cout<<"Subject Age : "<<s[i].age<<endl;   
        }    
  
    } 
}
int main()
{
    Student s[11]; // here 11 records can be entered which are more than 10
   cout<<"----------------------"<<endl;
   cout<<"Enter Students Details "<<endl;
   cout<<"----------------------"<<endl;
    
    for(int i=0;i<11;i++)
    {
        cout<<"Student "<<i+1<<endl;
        cout<<"Enter Age between 11 to 14 "<<endl;
        cout<<"Enter student name :";
        cin>>s[i].name;
         age:
        cout<<"Enter student age :";
        cin>>s[i].age;  
        if(s[i].age<11 || s[i].age>14)
        {
        cout<<"Age Must be between 11 to 14,Enter age again "<<endl;
         goto age;
        }
         cout<<"Enter student roll no :";
        cin>>s[i].rno;
        cout<<endl;
    
        
    }
    
    cout<<endl<<endl;
    
    // 1 - Write a function to print the names of all the students having age 14.
     point1(s);
    
    // 2 - Write another function to print the names of all the students having even roll no.
     point2(s);
    
    // 3 - Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).
      int find;
      cout<<endl<<endl;
      cout<<"Enter a roll no to find :";
      cin>>find;
      point3(s,find);
    
  
    
}






































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



