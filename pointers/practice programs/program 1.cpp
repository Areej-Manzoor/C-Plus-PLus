#include <iostream>
using namespace std;

// PROBLEM : Write a program to find out the greatest and the smallest among three numbers using pointers.

int main()
{
  int a=55,b=10,c=15;
  int *ptr1,*ptr2,*ptr3;
  ptr1=&a;
  ptr2=&b;
  ptr3=&c;
  
  if((*ptr1<*ptr2) && (*ptr1<*ptr3))
  cout<<"Smallest no = "<<*ptr1;
  else if((*ptr2<*ptr1) && (*ptr2<*ptr3))
  cout<<"Smallest no = "<<*ptr2;
  else
  cout<<"Smallest no = "<<*ptr3;
  
  return 0;
}








































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



