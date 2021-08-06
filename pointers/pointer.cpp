#include <iostream>
using namespace std;

// POINTERS
// A pointer is avariable that is used to store the memory location.The referencve operater (& Amper sign) is used to store the address of  a variable in the pointer.And to the display the value at a particular memory location the dereference variable (* Asteric) is used


// POINTER DECLARATION
// int* ptr;

int main() {
    
int a=3;

int* ptr;

ptr=&a;// the dataa type of a pointer must be same as the data type of a avariable whose memmory address is to be stored,as here (ptr) and (a) both are of same datatype which is (int) otherwise it'll throw an error for example:
    //error: cannot convert ‘int*’ to ‘float*’ in assignment


    //  the addres of a variable can be displayed by two methods
    // (1) by storing the address into pointer like ptr=&a
cout<<"The memory address of variable a = "<<ptr<<endl;

   // (2) Or by directly writing &a both wll display same result
cout<<"The memory address of variable a = "<<&a<<endl;

cout<<"The value of variable (a) whose address is stored in pointyer ptr = "<<*ptr;




}

