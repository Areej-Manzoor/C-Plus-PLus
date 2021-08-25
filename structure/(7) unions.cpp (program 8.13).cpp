#include <iostream>

using namespace std;

// Union Example :Program 8.13 from it series c++ book | page:261

// unions are similar to structures,used to group different types of variables ,can be accessed usin "Dot Operator".The difference between structures and unions is memory allocation.In structures everuy member is assigned unique memory location but in unions a memory location is shared by all the data members(Memory of biggest variable)

union shirt
{
 char size;
 int chest,height;
};

int main()
{
shirt s;
  
  
  cout<<"Enter Size :" ;
  cin>>s.size;
  cout<<"Enter Chest Measurement :" ;
  cin>>s.chest;
  cout<<"Enter Height Measurement :" ;
  cin>>s.height; 
 
    
cout<<endl<<endl;
cout<<"Shirt details are as follows "<<endl;
cout<<"Size : "<<s.size<<endl;
cout<<"Chest Measurement : "<<s.chest<<endl;
cout<<"Enter Height Measurement :"<<s.height;
    
//in output can be seen that size is not displaying any value/garbage value as only one member can be assigned and accessed at a time.

// Suppose size takes 1 byte,chest & height takes 2,2 bytes rspectively so here union will will allocate 2 bytes in the memory coz it is the biggest size avaiable in union data member.
// it will only keep the value of last enetred input to any variable and overrides pervious.
  
   return 0;
}
















































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



