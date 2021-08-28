#include <iostream>
#include<cstring>
using namespace std;

// PROBLEM : Write a program to find the factorial of a number using pointers.

// METHOD 1

int factorial(int *ptr)
{
 if(*ptr<=1)
 {
     return 1;
 }
int n=*ptr-1;
return *ptr*factorial(&n);
}    
int main()
{
  int n;
  cout<<"Enter a no :";
  cin>>n;
  cout<<" Factorial of "<<n<<" = "<<factorial(&n);
  
  return 0;
}


// METHOD 2

// int main()
// {
//   int n,fact=1;
//   cout<<"Enter a no :";
//   cin>>n;
//   cout<<" Factorial of "<<n<<" = ";
//   for(int i=1;i<=n;i++)
//   {
//   if(i==n)
//   {
//       cout<<n;
//   }       
//   else
//   {
      
       
//       cout<<i<<"*";
//   }     
//     fact=fact*i;
   
//   }
//   cout<<" = "<<fact;
  
//   return 0;
// }







































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



