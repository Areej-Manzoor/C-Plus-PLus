#include <iostream>
using namespace std;

// Void Pointer
//As the type of pointer must be as same the type of variable whose value is to be stored in pointer otherwise it'll throw an error for example:
    //error: cannot convert ‘int*’ to ‘float*’ in assignment
// But here we have void operator which means if a pointer's datatype is defined as void then it can store the value of any type of variable without having any error

int main() {
    
int a=3,b=40.45;
void *ptr1,*ptr2;
ptr1=&a;
ptr2=&b;

cout<<"Memory address/location of a which is stored in ptr1 = "<<ptr1<<endl;
cout<<"Memory address/location of b which is stored in ptr2 = "<<ptr2;


}

