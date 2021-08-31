#include <iostream>
using namespace std;

// PROGRAM : Write a program in C++ to show the usage of pointer to structure

struct Book
{
 int BookID,pages;
 float price;
};

int main()
{
   Book b[2];
   Book *ptr;
  ptr=b;
  for(int i=0;i<2;i++)
  {
  cout<<"Enter Book "<<i+1<<" Id :";
  cin>>b[i].BookID;
  cout<<"Enter Book "<<i+1<<" Price :";
  cin>>b[i].price;
  cout<<"Enter Book "<<i+1<<" Pages :";
  cin>>b[i].pages;  
  }
  

  for(int i=0;i<2;i++)
  {
        

cout<<"Book "<<i+1<<" Id : "<<ptr->BookID<<endl;
cout<<"Book "<<i+1<<" Price : "<<ptr->price<<endl;
cout<<"Book "<<i+1<<" Pages : "<<ptr->pages<<endl;

ptr++;
    
  }  


    
  
   return 0;
}
















































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    







































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    




















































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



