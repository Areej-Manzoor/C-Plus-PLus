#include <iostream>


using namespace std;

// PROBLEM :Write a structure to store the name, account number and balance of customers (more than 10) and store their information.
// 1 - Write a function to print the names of all the customers having balance less than $200.
// 2 - Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.

struct Customer
{
    string ac_no;
    int balance;
    char name[50];
};

void point1(Customer c[11]) // here structure variable recieved from main
{
   int p1_counter=0;
    cout<<"---------------------------------------------------------"<<endl;
    cout<<"Names of all the customers having balance less than $200 "<<endl;
    cout<<"---------------------------------------------------------"<<endl;
     for(int i=0;i<11;i++)
    {
      if(c[i].balance<200)
      {
          cout<<"Customer : "<<i+1<<endl;
          cout<<"Name : "<<c[i].name<<endl;
          p1_counter++;
      }
     
        
    }
     if(p1_counter==0)
      {
          cout<<"No customer has been found having balance less than $200";
      }
       
}    

void point2(Customer c[11]) // here structure variable recieved from main
{
   int p2_counter=0;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"Incremented balance details of all customer already having balance more than $1000 "<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;
     for(int i=0;i<11;i++)
    {
      if(c[i].balance>1000)
      {   
          cout<<"Customer : "<<i+1<<endl;
          cout<<"Name : "<<c[i].name<<endl;
          cout<<"Balance before increment : $"<<c[i].balance<<endl;
          c[i].balance=c[i].balance+100;
          cout<<"Balance after $100 increment : $"<<c[i].balance<<endl;
          
          p2_counter++;
      }
     
        
    }
     if(p2_counter==0)
      {
          cout<<"No customer has been found having balance more than $1000";
      }
       
}    

int main()
{
    Customer c[11]; // here 11 records can be entered which are more than 10
   cout<<"----------------------"<<endl;
   cout<<"Enter Customer Details "<<endl;
   cout<<"----------------------"<<endl;
    for(int i=0;i<11;i++)
    {
        cout<<"Customer "<<i+1<<endl;
        cout<<"Enter Customer Name : ";
        cin>>c[i].name;
        cout<<"Enter Customer Account Number : ";
        cin>>c[i].ac_no; 
        cout<<"Enter Customer Balance: ";
        cin>>c[i].balance;  
        
        cout<<endl;
    
        
    }
    
    cout<<endl<<endl;
    
    // 1 - Write a function to print the names of all the customers having balance less than $200.
    point1(c);
   
  //  2 - Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.
    cout<<endl<<endl;
    point2(c);
}






































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



