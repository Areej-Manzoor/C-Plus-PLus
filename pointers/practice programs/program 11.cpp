#include <iostream>
#include <cstring>
using namespace std;

// PROBLEM : Write a program in C to count the number of vowels and consonants in a string using a pointer

int main()
{
   char str[50],*ptr;
   int const_counter=0,vowel_counter=0;
   
   cout<<"Enter a string : ";
   cin>>str;
   
   ptr=str;
   
   while(*ptr !='\0')
   {
      if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
      vowel_counter++;
      else
      const_counter++;
      
      *ptr++;
   }       
   
   cout<<endl;
   cout<<"Number of constants in given sting : "<<const_counter<<endl;
   cout<<"Number of vowels in given string : "<<vowel_counter;
  return 0;
}







































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



