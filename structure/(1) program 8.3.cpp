#include <iostream>

using namespace std;

// Structure Example :Program 8.3 from it series c++ book | page:250

struct Book
{
 int BookID,pages;
 float price;
};

int main()
{
   Book b1,b2;
  
  cout<<"First Book Entery"<<endl<<endl;
  
  cout<<"Enter Book Id";
  cin>>b1.BookID;
  cout<<"Enter Book Price";
  cin>>b1.price;
  cout<<"Enter Book Pages";
  cin>>b1.pages;
  
   cout<<endl<<endl<<"Second Book Entery"<<endl<<endl;
  
  cout<<"Enter Book Id";
  cin>>b2.BookID;
  cout<<"Enter Book Price";
  cin>>b2.price;
  cout<<"Enter Book Pages";
  cin>>b2.pages;
  
  if(b1.price>b2.price)
  {
    cout<<"The most costly book is as follows :"<<endl<<endl;
    cout<<"Book Name : "<<b1.BookID<<endl<<"Book Price : "<<b1.price<<endl<<"Book Pages : "<<b1.pages;
  }
  else
  {
     cout<<"The most costly book is as follows :"<<endl<<endl;
    cout<<"Book Name : "<<b2.BookID<<endl<<"Book Price : "<<b2.price<<endl<<"Book Pages : "<<b2.pages;
  }
    
    
  
   return 0;
}
















































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



