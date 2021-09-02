#include <iostream>
using namespace std;

// Local Functions
// A type of function which is declared in another function.It can only be called inside the function it is declared.
// As here in main function calculator is called n in calculator add is declared and called but definition must be outside function.
void account()

{

    int total;

    int bill1, bill2;

    int add_bills(int , int );

//Initialization of variables

    bill1 = 2000;

    bill2 = 5000;

    total = 0;

//Compute total bill amount

    total = add_bills( bill1, bill2);

//Print results

    cout << "Total Amount =" << "" << total << endl;

}

//Definition of function add_bills()

int add_bills( int bill1, int bill2)
{

    return(bill1 + bill2);

}
int main()
{
    account();
    
}

