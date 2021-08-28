#include <iostream>
using namespace std;

// PROBLEM : Write a program in C to find the maximum number between two numbers using a pointer

// METHOD 1

int max(int *ptr1,int *ptr2)
{
    if(*ptr1>*ptr2)
    return *ptr1;
    else
    return *ptr2;
   
}

int main()
{
 int num1,num2;
 
 cout<<"Enter first number : ";
 cin>>num1;
 cout<<"Enter second numbner : ";
 cin>>num2;
 
 cout<<"Maximum Number = "<<max(&num1,&num2);
 
  return 0;
}







































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



