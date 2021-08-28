#include <iostream>
using namespace std;

// PROBLEM : Write a program in C++ to store n elements in an array and print the elements using pointer

#define MAX_SIZE 100 //constant
int main()
{
 int arr[MAX_SIZE],*ptr,n;
 
 cout<<"Enter number of elements to store : ";
 cin>>n;
 ptr=arr;
 for(int i=0;i<n;i++)
 {
  cout<<"Enter "<<i+1<<" element : ";
  cin>>arr[i];
 }     
 
 cout<<"Elements in array are as follows: "<<endl;
 
 for(int i=0;i<n;i++)
 {
 cout<<ptr[i]<<endl; 
 }  
  return 0;
}







































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



