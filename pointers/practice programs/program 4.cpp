#include <iostream>
#include<cstring>
using namespace std;

// PROBLEM : Write a program in C to add numbers using call by reference

// METHOD 1

int add(int *ptr1,int *ptr2)
{
    return *ptr1+*ptr2; // here value at address of ptr1 adds to the value at address of ptr2
}

int main()
{
 int num1=5,num2=6;
 
 cout<<"Sum of "<<num1<<" & "<<num2<<" = "<<add(&num1,&num2);
 
  return 0;
}







































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



