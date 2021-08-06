#include <iostream>
using namespace std;

int main() {
int i,n=3;

// n=3; , so the loop should display each statement until it reaches the iteration no 3 but in this case when the break statement is executed the control moves outside the body of the loop or breaks the loop and the statements after thebreak are skipped and the statements after the loop body are executed

// break statement in loop without condition
cout<<"\t\tBreak Statement In Loop Without Condition"<<endl<<endl;
for(i=1;i<=n;i++)
{
     cout<<"\t\t\t Iteration "<<i<<" = "<<i<<endl;
     break;
     cout<<"NUM  = "<<i<<endl; //as here this will not be executed either time coz it comes after the break  statement
}
cout<<"\t\t\tGood Bye"<<endl<<endl;

// break statement in loop with condition
cout<<"\t\tBreak Statement In Loop With Condition"<<endl<<endl;
for(i=1;i<=n;i++)
{
     cout<<"\t\t\t Iteration "<<i<<" = "<<i<<endl;
    if(i==n)
    {
         break;
    }
     cout<<"\t\t\t NUM  = "<<i<<endl; //as here this will not be executed if n==n coz it comes after the break  statement
}
cout<<"\t\t\tGood Bye";
}

