#include <iostream>

using namespace std;

// Structure Example :Program 8.9 from it series c++ book | page:256

// An Array is collection of same types of data such as int,float etc .Same as Array can be of a user defined data type Structure.An array of structure is a structure is a type of array in which element containes a complete structure .it can be used to store many records. 
struct Book
{
 int BookID,pages;
 float price;
};

int main()
{
   Book b[2];
   int max,index;
  
  for(int i=0;i<2;i++)
  {
  cout<<"Enter Book "<<i+1<<" Id :";
  cin>>b[i].BookID;
  cout<<"Enter Book "<<i+1<<" Price :";
  cin>>b[i].price;
  cout<<"Enter Book "<<i+1<<" Pages :";
  cin>>b[i].pages;  
  }
  
  max=b[0].price;
  for(int i=0;i<2;i++)
  {
    if(b[i].price>max)
    {
        max=b[i].price;
        index=i;
    }
  }  

    
cout<<endl<<endl;
cout<<"The details of most costly book are as follows :"<<endl;
cout<<" Book "<<index+1<<" is most expensive book"<<endl;
cout<<"Book "<<index+1<<" Id : "<<b[index].BookID<<endl;
cout<<"Book "<<index+1<<" Price : "<<b[index].price<<endl;
cout<<"Book "<<index+1<<" Pages : "<<b[index].pages<<endl;
    
  
   return 0;
}
















































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    







































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    




















































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



