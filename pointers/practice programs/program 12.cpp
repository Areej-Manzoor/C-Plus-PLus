#include <iostream>
#include <cstring>
using namespace std;

// PROBLEM :  Write a program in C++ to print the elements of an array in reverse order

int main()
{
  int n,*ptr;
  cout<<"Enter no of elements : ";
  cin>>n;
  int arr[n];
  ptr=arr;
  
  for(int i=0;i<n;i++)
  {
   cout<<"Enter "<<i+1<<" element : ";
   cin>>arr[i];
  }      
  
   cout<<"----------------------------------"<<endl;
   cout<<"ELEMENTS IN ARRAY BEFORE REVERSING"<<endl;
   cout<<"----------------------------------"<<endl;
  for(int i=0;i<n;i++)
  {
      if(i==n-1)
       cout<<*ptr;
      else
       cout<<*ptr++<<",";
       
     
  } 
   cout<<endl;
   cout<<"----------------------------------"<<endl;
   cout<<"ELEMENTS IN ARRAY AFTER REVERSING"<<endl;
   cout<<"----------------------------------"<<endl;
  for(int i=n;i>0;i--)
  {
      if(i==1) //i=1 because it will be last elem n greater than 0
       cout<<*ptr;
      else
       cout<<*ptr--<<",";
       
     
  }   
  return 0;
}







































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



