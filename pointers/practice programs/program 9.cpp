#include <iostream>
#include <cstring>
using namespace std;

// PROBLEM : Write a program in C++ to Calculate the length of the string using a pointer.

int main()
{
   
   char str[20],*ptr;
   int counter;

   ptr=str;
   cout<<"Enter a string = ";
   cin.get(str,20);

 
  while(*ptr !='\0')
   {
   counter++; 
   *ptr++;
   }
   
   cout<<"Length of string '"<<str<<"' = "<<counter;
  return 0;
}







































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



