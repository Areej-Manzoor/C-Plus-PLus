









#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    //A string is an array of characters.A pointer of type char can refer to the string. we do not need to assign ptr=&name like this as string is an array and array address is same as the name of the array variable so referring would be like  ptr=name;
    
    // Both the pointer and string must be of same data type other wise it'll throw a type conversion error like this 
    // error: cannot convert ‘char [20]’ to ‘int*’ in assignment
    
    //https://stackoverflow.com/questions/7949761/c-error-void-is-not-a-pointer-to-object-type
    
    
   cout <<"Arrays & Strings "<< endl<<endl; 
   
   char name[20],*ptr,ch,found; 

   ptr=name;
   cout<<"Enter a name = ";
   cin.get(name,20);
   
 
  cout<<endl<<"Enter a character to find in above entered name =";
  cin>>ch;

        cout<<endl<<endl<<"you you want to know the character stored at each conjested location"<<endl<<"or want to travel through array of characters"<<endl<<" Here if an element does not display any value it means that it is displaying space "<<endl<<endl;

  for(int i=0;i<strlen(name)-1;i++)
  {
     if(i>strlen(name)-1)
      cout<<i<<" elemnt : "<<*ptr<<endl;
      else
      cout<<i<<" elemnt : "<<*ptr++<<endl;
  }

 
   return 0;
}






































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



