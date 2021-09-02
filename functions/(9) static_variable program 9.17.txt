#include <iostream>
using namespace std;

// StATIC VARIABLES
// A static varioable is used with 'static' keyword . it is similar to local function but used to increase the lifetime of local variable
// Functions Example :Program 9.17 from it series c++ book | page:289

void fun()
{
    static int n=0;   // here n will be initialized to 0 only when the function is first time called n will keep on increasing value
                     // but in case of local variable it will initialize to 0 each time a function is called
    n++;
    cout<<"Value of n : "<<n<<endl;
}
int main()
{
 
 for(int i=0;i<5;i++)
  fun();
}












































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



