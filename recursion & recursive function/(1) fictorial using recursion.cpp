#include <iostream>

using namespace std;

// fictorial using recursive function
int fictorial(int n)
{
 if(n<=1)
 {
     return 1;
 }
 return n*fictorial(n-1);
 
 
}
// n!=n*(n-1)=n!=n*fictorial(n-1)
// here eache time a function will itself (fictorial)
//3!=3*fictorial(3-1)
//3!=3*2*fictorial(2-1)
//3!=3*2*fictorial(1)
//3!=3*2*1  (here as n==1 so it'll return 1)
// so ultimately 3!=6

int main()
{
  
  int n=3;
 cout<<"Fictorial of "<<n<<" = "<<fictorial(n);
   
   return 0;
}