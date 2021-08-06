#include <iostream>
using namespace std;

// POINTER AND ARRAYS

// Array is a  collection of items of similar type in a contigous memory locations.If we have to the marks of 500 students then to define an array of 500 indexes is better than defining 500 variables.

// The memory address in arrays is same as the name of array and to store it to pointer does not need reference operator
// For Example a simple variable's address is stored as 
// int *ptr=&a;
// But for arrays it is not required
// int int marks[4]={32,99,56,88}; int *ptr=marks;


int main()
{
    int marks[4]={32,99,56,88};
    int *ptr=marks;
    
    for(int i=0;i<4;i++)
    {
        cout<<" Marks at index "<<i<<" = "<<marks[i]<<endl;
    }
    
    
    for(int j=0;j<4;j++)
    {
        if(j==0)
        {
            cout<<"value at index "<<j<<" = "<<*ptr<<endl;
        }
        else
        {
            cout<<"value at index "<<j<<" = "<<*ptr+1<<endl;
        }
    }
    
    // here *ptr represents to the value of first value in array
    // *ptr++ referes to the second and same for next indexes
    cout<<" The value of *p = "<<*ptr<<endl;
    cout<<" The value of *(ptr+1) = "<<*(ptr+1)<<endl;
    cout<<" The value of *(ptr+2) = "<<*(ptr+2)<<endl;
    cout<<" The value of *(ptr+1) = "<<*(ptr+3)<<endl;
    
    
    cout<<" The value = "<<*ptr++<<endl;
    cout<<" The value = "<<*ptr++<<endl;
    cout<<" The value = "<<*ptr+1<<endl;
    cout<<" The value = "<<*++ptr<<endl;
   
}

