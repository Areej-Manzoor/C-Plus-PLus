#include <iostream>

using namespace std;

// A parameter can be passed to a function using pointers.The address of the actual parameter is passed to the formal parameter if the formal parameter is a pointer . In this example of "Pass By reference" the formal parameters are  aliases of actual parameters.The change in the value of formal parametr does not change the values of actual parameter while in "Pass by Reference" the change in both either formal or actual paramters change the values in both

// here in swap function both formal parameters accepts memory addresses of actual parameters 

void swap(int *a,int *b)
{
    int temp;   
    temp=*a;      // here temp=value at address of a
    *a=*b;       // here value at address of a=value at address of b
    *b=temp;    //here value at address of b =temp 
}
int main()
{
    cout<<"Pointers & Functions"<<endl<<endl;
    cout<<" Call by reference"<<endl<<endl;
    
    int n1=5,n2=10;
    
    cout<<" Value of n1 before swapping ="<<n1<<endl;
    cout<<" Value of n2 before swapping ="<<n2<<endl;
    swap(&n1,&n2);
    cout<<endl<<" Value of n1 after swapping ="<<n1<<endl;
    cout<<" Value of n2 after swapping ="<<n2<<endl;
    

    
    
  
   return 0;
}