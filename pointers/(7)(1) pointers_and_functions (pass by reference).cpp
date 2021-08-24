#include <iostream>
#include<cstring>
using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
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