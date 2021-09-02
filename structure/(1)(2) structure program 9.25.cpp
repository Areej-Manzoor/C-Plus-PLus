#include <iostream>
#include <iomanip>
using namespace std;

// STRUCTURES AND FUNCTIONS
// Functions Example :Program 9.25 from it series c++ book | page:295
struct cricketer
{
    char name[50];
    int runs,innings,tno;
    float avg;
};
int main()
{
cricketer c[5];

for(int i=0;i<5;i++)
{  
    cout<<i+1<<" Crickter's Record "<<endl;
    cout<<"---------------------"<<endl;
    cout<<"Enter  name : ";
    cin>>c[i].name;
    cout<<"Enter runs : ";
    cin>>c[i].runs;
    cout<<"Enter innings : ";
    cin>>c[i].innings;
    cout<<"Enter times not out : ";
    cin>>c[i].tno;    
    c[i].avg=float(c[i].runs)/c[i].innings;
    
}

// cout<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t CRICKETER'S TABLE"<<endl;
cout<<"\t\t\t\t\t\t --------------------------------------------------------------------------------"<<endl;
cout<<"\t\t\t\t\t\t Player's Name \t\t Runs \t Innings\t  Times not out \t Average"<<endl;
cout<<"\t\t\t\t\t\t --------------------------------------------------------------------------------"<<endl;
for(int i=0;i<5;i++)
{  
   cout<<"\t\t\t\t\t\t "<<c[i].name<<setw(25)<<c[i].runs<<setw(10)<<c[i].innings<<setw(20)<<c[i].tno<<setw(15)<<c[i].avg<<endl;
    
}
cout<<"\t\t\t\t\t\t --------------------------------------------------------------------------------"<<endl;
cout<<"\t\t\t\t\t\t ********************************************************************************"<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t\t FINISH"<<endl;
cout<<"\t\t\t\t\t\t ********************************************************************************"<<endl;
}












































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



