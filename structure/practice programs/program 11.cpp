#include <iostream>
using namespace std;

// PROGRAM : Write a program in C++ to show a pointer to structure

struct Book
{
 int BookID=10,*ptr;
};

int main()
{
   Book b;
   b.ptr=&b.BookID;
   cout<<*b.ptr;

 return 0;
}
















































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    







































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    




















































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



