#include <iostream>

using namespace std;

// fictorial using iteration or iterative concepets
void fictorial(int n)
{
    int fact=1;
for(int i=1;i<=n;i++)
{   
    if(i==n)
    cout<<i;
    else
    cout<<i<<" * ";
    
    fact=fact*i;
}
 cout<<"= "<<fact;
}


int main()
{
  
  int n=3;
fictorial(3);
   
   return 0;
}