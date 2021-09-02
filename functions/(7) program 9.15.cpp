#include <iostream>
using namespace std;

// Functions Example :Program 9.15 from it series c++ book | page:285

long fact(int n)
{
    long fact=1;
   for(int i=1;i<=n;i++)
   fact=fact*i;
   
   return fact;
    
}

int main()
{
  int n;
  double sum=1,term;
  
  cout<<"Enter the maximum value of denominator : ";
  cin>>n;
  
  for(int i=1;i<=n;i++)
  {
      term=1.0/fact(i);
      sum=sum+term;
      cout<<fact(i)<<" "<<term<<endl;
  }
  cout<<"Sum of series : "<<sum;

}












































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



