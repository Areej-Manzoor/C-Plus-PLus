#include <iostream>
using namespace std;

// Different parametes can be passed to function.In "Pass By Value" the value of actual parameteris copied to formal parametr not the address a in "Pass by reference".the change in the value of formal parametr does not change the values of actual parameter while in "Pass by Reference" the change in both either formal or actual paramters change the values in both

void swap(int a,int b)
{
    int temp;   
    temp=b;    
    a=b;       
    b=temp;
}
void swapPrint(int a,int b)
{
    int temp;   
    temp=a;    
    a=b;       
    b=temp;
    cout<<" Value of a after swapping ="<<a<<endl;
    cout<<" Value of b after swapping ="<<b<<endl;
}
int main()
{
    cout<<"Pointers & Functions"<<endl<<endl;
    cout<<" Call by Value"<<endl<<endl;
    
    int n1=5,n2=10;
    
    cout<<" Value of n1 before swapping ="<<n1<<endl;
    cout<<" Value of n2 before swapping ="<<n2<<endl;
    swap(n1,n2);
    // here if we print n1,n2 again it'll display orignal values not values after swapping as function just copies the value it does noty bring change in orignal parameter/variables
    cout<<endl<<" Value of n1 after swapping ="<<n1<<endl;
    cout<<" Value of n2 after swapping ="<<n2<<endl;
    
    // but if we print iside function to realize change
    
    cout<<endl<<endl<<"Printing Inside Function "<<endl<<endl;
    swapPrint(n1,n2);
    

    
    
  
   return 0;
}











































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



