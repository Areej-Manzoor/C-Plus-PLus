#include <iostream>
using namespace std;

// PROBLEM : Write a C++ program to swap two arrays using pointers.

#define MAX_SIZE 100

void printArrays(int *f_ptr,int *s_ptr,int n)
{
   cout<<"------------"<<endl;
   cout<<"FIRST ARRAY  "<<endl;
   cout<<"------------"<<endl;
   
    for(int i=0;i<n;i++)
   {
       cout<<i+1<<" ELEMENT :"<<*f_ptr<<endl;
       *f_ptr++;
   }
   
   cout<<"-------------"<<endl;
   cout<<"SECOND ARRAY "<<endl;
   cout<<"------------"<<endl;
   
    for(int i=0;i<n;i++)
   {
       cout<<i+1<<" ELEMENT :"<<*s_ptr<<endl;
       *s_ptr++;
   }
}

void swapArrays(int *f_ptr,int *s_ptr,int n)
{ 
    int temp;
      for(int i=0;i<n;i++)
   {
       temp=*f_ptr;
       *f_ptr=*s_ptr;
       *s_ptr=temp;
       *f_ptr++;
       *s_ptr++;
   }
}
int main()
{
   int f_arr[MAX_SIZE],s_arr[MAX_SIZE],n;
   cout<<"Enter no of elements : ";
   cin>>n;
   
   cout<<"-------------------------------"<<endl;
   cout<<"ENTER ELEMENTS FOR FIRST ARRAY "<<endl;
   cout<<"-------------------------------"<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<"Enter "<<i+1<<" element : ";
       cin>>f_arr[i];
   }
   
   cout<<endl;
   cout<<"-------------------------------"<<endl;
   cout<<"ENTER ELEMENTS FOR SECOND ARRAY "<<endl;
   cout<<"-------------------------------"<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<"Enter "<<i+1<<" element : ";
       cin>>s_arr[i];
   }
   
   cout<<endl;
   cout<<"----------------------"<<endl;
   cout<<"ARRAYS BEFORE SWAPPING "<<endl;
   cout<<"----------------------"<<endl;
   
   printArrays(f_arr,s_arr,n);
   cout<<endl;

   swapArrays(f_arr,s_arr,n);
   cout<<endl;

   cout<<"----------------------"<<endl;
   cout<<"ARRAYS BEFORE SWAPPING "<<endl;
   cout<<"----------------------"<<endl;

   printArrays(f_arr,s_arr,n);
}

