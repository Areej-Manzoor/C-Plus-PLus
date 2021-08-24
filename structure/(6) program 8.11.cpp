#include <iostream>

using namespace std;

// Structure Example :Program 8.11 from it series c++ book | page:259

// A structure in another structure is called nested structure same as nested if
struct date
{
 int day,month,year;
};

struct phonebook
{
  char name[40],city[40];
  long tel;
  date d;
};

int main()
{
phonebook p;
  
  cout<<"Enter Name :" ;
  cin>>p.name; 
  cout<<"Enter City :" ;
  cin>>p.city;  
  cout<<"Enter Telephone :" ;
  cin>>p.tel; 
  cout<<"Enter Day :" ;
  cin>>p.d.day;
  cout<<"Enter Month :" ;
  cin>>p.d.month;
  cout<<"Enter Year :" ;
  cin>>p.d.year;

 
    
cout<<endl<<endl;
cout<<"The details are as follows :"<<endl;
cout<<"Name : "<<p.name<<endl;
cout<<"City : "<<p.city<<endl;
cout<<"Telephone :"<<p.tel<<endl;
cout<<"Day :"<<p.d.day<<endl;
cout<<"Month :"<<p.d.month<<endl;
cout<<"Year :"<<p.d.year<<endl;
    
  
   return 0;
}
















































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



