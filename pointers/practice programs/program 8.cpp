#include <iostream>
#include <cstring>
using namespace std;

// PROBLEM : Write a program in C to find the largest element using Dynamic Memory Allocation

int main()
{
 int *ptr,n,max;
 
 cout<<"Enter number of elements to store : ";
 cin>>n;
 ptr=new int[n];
 
  for(int i=0;i<n;i++)
  {
   cout<<"Enter "<<i+1<<" element : ";
   cin>>ptr[i];
  }      

  for(int i=0;i<n-1;i++)
 {
     cout<<ptr[i]<<" & "<<ptr[i]+1<<endl;
  if(ptr[i]<ptr[i]+1)
  {
    
    cout<<" max = "<<ptr[i]+1<<endl;
    max=
  } 

  } 
  

 
  return 0;
}







































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



