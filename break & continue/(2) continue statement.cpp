#include <iostream>
using namespace std;
// fabonacci series using iteration
int main() {
int i,n=3;

// n=3; , so the loop should display each statement until it reaches the iteration no 3 but in this case when the continue statement is executed the control moves to the start of the loop ,the statements after continue are skipped and the statements after the loop body are executed

// continue statement in loop without condition
cout<<"\t\tContinue Statement In Loop Without Condition"<<endl<<endl;
for(i=1;i<=n;i++)
{
     cout<<"\t\t\t Iteration "<<i<<" = "<<i<<endl;
     continue;
     cout<<"NUM  = "<<i<<endl; //as here this will not be executed either time coz it comes after the continues statement as each time the control comes to the continue it moves it start of the loop
}
cout<<"\t\t\tGood Bye"<<endl<<endl;

// continue statement in loop with condition
cout<<"\t\tContinue Statement In Loop Without Condition"<<endl<<endl;
for(i=1;i<=n;i++)
{
     cout<<"\t\t\t Iteration "<<i<<" = "<<i<<endl;
    if(i==2)
    {
         continue;
    }
     cout<<"\t\t\t NUM  = "<<i<<endl; //as here this will not be executed only when i=2 coz it comes after the continues statement and here control will not move to the start each time until unless a specific condition meets
}
cout<<"\t\t\tGood Bye"<<endl<<endl;
}

