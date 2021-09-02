#include <iostream>
using namespace std;

// Function Overloading
// The process of declaring multiple functions with same name but differet parameters.The functions must have same name but must diffrer in following :
// (1) type of parameter
// (2) number of parameters
// (3 sequence of parameters


//(1) type of parameter
void add(float a, float b)
{  
    cout<<"(1) type of parameter"<<endl;
    cout<<"Sum of a & b = "<<a+b;
}

// (2) number of parameters
void add(int a, int b,int c)
{    
    cout<<"(2) number of parameters"<<endl;
    cout<<"Sum of a,b & c = "<<a+b+c;
}

// (3) sequence of parameters // in sequence parameters name can be sme but must diff. as here
   // but if we declare like void add(int b,int a) it will nt be allowed
void add(float b,int a)
{   
    cout<<"(3) sequence of parameters"<<endl;
    cout<<"Sum of a & b = "<<a+b;
}

int main()
{
    add(1,2);
    cout<<endl;
    add(1,2,3);
    cout<<endl;
    add(4.4,3);
}




