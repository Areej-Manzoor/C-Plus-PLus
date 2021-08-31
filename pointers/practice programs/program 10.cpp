#include <iostream>
#include <cstring>
using namespace std;

// PROBLEM : Write a program in C++ to swap elements using call by reference. Go to the editor
// Test Data :
// Input the value of 1st element : 5
// Input the value of 2nd element : 6
// Input the value of 3rd element : 7

void swap(int *a,int *b,int *c)
{
    int temp;
    temp=*a;
   *a=*b;
   *b=*c;
   *c=temp;
   
   cout<<"------------------------"<<endl;
   cout<<"ELEMENTS AFTER SWAPPING"<<endl;
   cout<<"------------------------"<<endl;
   cout<<"a = "<<*a<<endl;
   cout<<"b = "<<*b<<endl;
   cout<<"c = "<<*c<<endl<<endl;
    
}
int main()
{
   int a,b,c;
   cout<<"Enter value of  a : ";
   cin>>a;
   cout<<"Enter value of  b : ";
   cin>>b;
   cout<<"Enter value of  c : ";
   cin>>c;
   cout<<endl;
   cout<<"-------------------------"<<endl;
   cout<<"ELEMENTS BEFORE SWAPPING"<<endl;
   cout<<"-------------------------"<<endl;
   cout<<"a = "<<a<<endl;
   cout<<"b = "<<b<<endl;
   cout<<"c = "<<c<<endl<<endl;
   swap(&a,&b,&c);
   
  return 0;
}







































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



