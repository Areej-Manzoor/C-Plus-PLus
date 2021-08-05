#include <iostream>

using namespace std;

// fabonacci series using recursive function
int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
return fib(n-2)+fib(n-1);

// here each function time a function calls its self
// let's supoose you want to know the number at position 3
// fib(n-2)+fib(n-1) where n=3
// fib(3-2)+fib(3-1)
// fib(1)+fib(2)
//as fib(1) where n=1 and 1<2 so it'll return the same number which is 1
//1+fib(2-2)+fib(2-1)
//1+fib(0)+fib(1)
//as fib(0) where n=0 and 0<2 so it'll return the same number which is 1
// same goes with fib(1)
//so 1+1+1=3
}

int main()
{
  
  int n=3;
  cout<<"The term in fabonaccoi series at position "<<n<<" = "<<fib(n);
   
   return 0;
}