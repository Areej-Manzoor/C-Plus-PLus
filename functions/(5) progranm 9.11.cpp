#include <iostream>
using namespace std;

// Functions Example :Program 9.11 from it series c++ book | page:282
int  mul(int a , int b)
{
     if(b%a == 0)
    return 1;
    else
    return 0;
    
}
int main()
{
  int a,b,mult;
  
  for(int i=0;i<5;i++)
  {
     cout<<"Enter a pair of integers : ";
     cin>>a>>b;
     mult=mul(a,b);
     
     if(mult==1)
     cout<<b<<" is multiple of "<<a<<endl;
     else
     cout<<b<<" is not multiple of "<<a<<endl;
  
  }
}











































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



