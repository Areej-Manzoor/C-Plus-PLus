#include <iostream>
using namespace std;

// PROBLEM : Write a C program to find length of string using pointers.

int main()
{
   char str[50],*ptr;
   int counter=0;
   cout<<"Enter a string : ";
   cin>>str;
   
   ptr=str;
   
   while(*ptr !='\0')
   {
       counter++;
       *ptr++;
   }
   
   cout<<"Length of string '"<<str<<"' : "<<counter;
}


