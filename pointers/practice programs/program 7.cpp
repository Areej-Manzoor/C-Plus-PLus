#include <iostream>
#include <cstring>
using namespace std;

// PROBLEM : Write a program in C++ to print all permutations of a given string using pointers

int main()
{
 char str[50],*ptr;
 
 cout<<"Enter a string : ";
 cin>>str;
 ptr=str;
 cout <<"\t\t\t\t\t\t\t-------------------------------"<<endl;
 cout<<"\t\t\t\t\t\t\t\t ACTUAL STRING"<<endl;
 cout <<"\t\t\t\t\t\t\t-------------------------------"<<endl;

 for(int i=0;i<strlen(str);i++)
 {
  if(i==0)
   cout<<"\t "<<*ptr;
  else
   cout<<*(ptr+i);
 }     
 
 cout <<"\t\t\t\t\t\t\t-----------------------------------------------"<<endl;
 cout<<"\t\t\t\t\t\t\t\t ALL POSSIBLE PERMUTATIONS"<<endl;
 cout<<"\t\t\t\t\t\t\t-----------------------------------------------"<<endl;
 
 int len=strlen(str);
  for(int i=0;i<len*len;i++)
 {
     for(int i=0;i<strlen(str);i++)
     {
        if(i==0)
         cout<<"\t "<<*ptr;
        else
         cout<<*(ptr+i);
     }
 }   
 
  return 0;
}







































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



