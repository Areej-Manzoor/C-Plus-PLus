#include <iostream>
using namespace std;

// PROBLEM : Write a C++ program to search an element in array using pointers.

int main()
{
   int n;
   cout<<"Enter no of elements : ";
   cin>>n;
   int arr[n],*ptr,find,flag=0;
   cout<<"-------------------------"<<endl;
   cout<<"ENTER ELEMENTS FOR ARRAY "<<endl;
   cout<<"-------------------------"<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<"Enter "<<i+1<<" element : ";
       cin>>arr[i];
   }
   
   ptr=arr;
   cout<<"Enter element to find  :";
   cin>>find;
   for(int i=0;i<n;i++)
   {
       if(*ptr==find)
       {
           cout<<find<<" exists in array ";
           flag=1;
           break;
       }   
      *ptr++;
   }

 if(flag==0)
 cout<<find<<" does not exist in array ";
}

