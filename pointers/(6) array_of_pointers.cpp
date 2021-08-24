#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    //An array of pointers is an array in which element in array is a pointer.Each element refers to a memory address.the array array can store the memory addtress of different objects of same type
    
    int *ptr[3],a,b,c;
    ptr[0]=&a;
    ptr[1]=&b;
    ptr[2]=&c;
    
    cout<<"Array of pointers "<<endl<<endl;
    cout<<"Enter Value of variable A :";
    cin>>a;
    cout<<"Enter value of variable B :";
    cin>>b;
    cout<<"Enter value of variable C :";
    cin>>c;
    
    for(int i=0;i<3;i++)
    {
        cout<<endl<<" The value of ptr["<<i<<"] ="<<*ptr[i];
    }
    
    
  
   return 0;
}