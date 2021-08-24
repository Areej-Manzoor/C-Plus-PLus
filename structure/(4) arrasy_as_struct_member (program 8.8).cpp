#include <iostream>

using namespace std;

// Structure Example :Program 8.8 from it series c++ book | page:254

struct Test
{
int rno;
char marks[5];
};

int main()
{
  Test t;
    
  cout<<"Array As Structure Member"<<endl<<endl;
  
  cout<<" Entyer roll no : ";
  cin>>t.rno;
  
  for(int i=0;i<5;i++)
  {
  cout<<" Entyer subject "<<i+1<<" Marks : ";
  cin>>t.marks[i];
  }
  
  cout<<endl;
  
  cout<<"Details are as follows"<<endl;
  cout<<"Roll No :"<<t.rno<<endl;
  for(int i=0;i<5;i++)
  {
  cout<<"Subject "<<i+1<<" Marks : "<<t.marks[i]<<endl;
  }
 
   return 0;
}
















































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



