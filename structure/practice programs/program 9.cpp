#include <iostream>
using namespace std;

// PROBLEM :Let us work on the menu of a library. Create a structure containing book information like accession number, name of author, book title and flag to know whether book is issued or not.
//          Create a menu in which the following can be done.
//          1 - Display book information
//          2 - Add a new book
//          3 - Display all the books in the library of a particular author
//          4 - Display the number of books of a particular title
//          5 - Display the total number of books in the library
//          6 - Issue a book
//   (If we issue a book, then its number gets decreased by 1 and if we add a book, its number gets increased by 1)
int count=0;
struct Library
{
    char acc_no[30],author_name[50],title[60],flag;
    
};
void displayBookInfo(Library lib[9])
{
    cout<<"\t\t\t\t\t\t\t *************************************************"<<endl;
    cout<<"\t\t\t\t\t\t\t * \t\t Details of All Books \t *"<<endl;
   cout<<"\t\t\t\t\t\t\t *************************************************"<<endl; 
   
   if(count==0)
   cout<<"\t\t\t\t\t\t\t * \t\t No books found \t *"<<endl;
for(int i=0;i<count;i++)
{   cout<<"\t\t\t\t\t\t\t\t Book"<<i+1<<endl;
    cout<<"\t\t\t\t\t\t\t\t Accession No :"<<lib[i].acc_no<<endl;
    cout<<"\t\t\t\t\t\t\t\t Title :"<<lib[i].acc_no<<endl;
    cout<<"\t\t\t\t\t\t\t\t Author Name :"<<lib[i].author_name<<endl;
    if(lib[i].flag=='0')
    cout<<"\t\t\t\t\t\t\t\t Issued : No"<<endl;
    else
    cout<<"\t\t\t\t\t\t\t\t Issued : Yes"<<endl;
    cout<<endl;
    
}    


}
void addBook(Library lib[9])
{
    
    cout<<"\t\t\t\t\t\t\t Enter Accession No : ";
    cin>>lib[count].acc_no;
    cout<<"\t\t\t\t\t\t\t Enter Book Title : ";
    cin>>lib[count].title;
    cout<<"\t\t\t\t\t\t\t Enter Book Author : ";
    cin>>lib[count].author_name;
    lib[count].flag='0';
    count++;
    
} 

void bookByAuthor(Library lib[9])
{
    
  char name[50];
  cout<<"\t\t\t\t\t\t\t *************************************************"<<endl;
  cout<<"\t\t\t\t\t\t\t * \t Books of a Particular Author \t *"<<endl;
  cout<<"\t\t\t\t\t\t\t *************************************************"<<endl; 
  cout<<"\t\t\t\t\t\t\t  Enter an Auther Name to Search Books :";
  cin>>name;
for(int i=0;i<count;i++)
{   
    
   
    if(lib[i].author_name==name)
    {
    cout<<"\t\t\t\t\t\t\t\t Book"<<i+1<<endl;
    cout<<"\t\t\t\t\t\t\t\t Accession No :"<<lib[i].acc_no<<endl;
    cout<<"\t\t\t\t\t\t\t\t Title :"<<lib[i].acc_no<<endl;
    cout<<"\t\t\t\t\t\t\t\t Author Name :"<<lib[i].author_name<<endl;
    cout<<endl;
    }
}  
} 

void bookByTitle(Library lib[9])
{
  char title[60];
  int title_counter=0;
  cout<<"\t\t\t\t\t\t\t *************************************************"<<endl;
  cout<<"\t\t\t\t\t\t\t * \t Books of a Particular Title \t *"<<endl;
  cout<<"\t\t\t\t\t\t\t *************************************************"<<endl; 
  cout<<"\t\t\t\t\t\t\t  Enter an Title :";
  cin>>title;
for(int i=0;i<count;i++)
{   
    
   
    if(lib[i].title==title)
    {
    title_counter++;
    }
} 
cout<<"\t\t\t\t\t\t\t There are total "<<title_counter<<" books titled '"<<title<<"'."<<endl;
} 

void totalBooks()
{
    cout<<"\t\t\t\t\t\t\t *************************************************"<<endl;
    cout<<"\t\t\t\t\t\t\t * \t\t Total No of Books in Library \t *"<<endl;
    cout<<"\t\t\t\t\t\t\t *************************************************"<<endl;  
    cout<<"\t\t\t\t\t\t\t There are total "<<count+1<<" books in the library"<<endl;
} 

void issueBook(Library lib[9])
{
  char issue_acc_no[30];
  cout<<"\t\t\t\t\t\t\t *************************************************"<<endl;
  cout<<"\t\t\t\t\t\t\t * \t\t Issue a Particular book \t *"<<endl;
  cout<<"\t\t\t\t\t\t\t *************************************************"<<endl; 
  
  cout<<"\t\t\t\t\t\t\t Enter book's accession no to issue : ";
  cin>>issue_acc_no;
 for(int i=0;i<count;i++)
{   
    
   
    if(lib[i].acc_no==issue_acc_no)
    {
    lib[i].flag='1';
    cout<<"\t\t\t\t\t\t\t Book has been issued successfully "<<endl;
    break;
    }
    else
    {
      cout<<"\t\t\t\t\t\t\t OOPS! Something Went Wrong... "<<endl;
    }    
}  
 
} 




int main()
{
   int ch;  
   char menu_redirect;
   Library lib[9];
   menu:
   cout<<"\t\t\t\t\t\t\t *************************************************"<<endl;
   cout<<"\t\t\t\t\t\t\t * \t\t LIBRARY MANAGEMENT SYSTEM \t *"<<endl;
   cout<<"\t\t\t\t\t\t\t *************************************************"<<endl; 
   cout<<"\t\t\t\t\t\t\t | \t Press 1 : Display a book info. \t | "<<endl;
   cout<<"\t\t\t\t\t\t\t | \t Press 2 - Add a new book \t\t | "<<endl;
   cout<<"\t\t\t\t\t\t\t | \t Press 3 : Books by particlar author \t | "<<endl;
   cout<<"\t\t\t\t\t\t\t | \t Press 4 : Books of particular title \t | "<<endl;
   cout<<"\t\t\t\t\t\t\t | \t Press 5 : Total no of books \t\t | "<<endl;
   cout<<"\t\t\t\t\t\t\t | \t Press 6 - Issue a book \t\t | "<<endl;
   cout<<"\t\t\t\t\t\t\t *************************************************"<<endl<<endl;;
   
   selection:
   cout<<"\t\t\t\t\t\t\t Enter a No Accordingly :";
   cin>>ch;
   
   switch(ch)
   {
    case 1:
    displayBookInfo(lib);
    cout<<"\t\t\t\t\t\t\t Press 'Y' or 'y' to go back to the main menu :";
    cin>>menu_redirect;
    if(menu_redirect=='Y' || menu_redirect=='y')
    goto menu;
   
    break;
    case 2:
    addBook(lib);
    cout<<"\t\t\t\t\t\t\t Record has been successfuly entered "<<endl;
    cout<<"\t\t\t\t\t\t\t Press 'Y' or 'y' to go back to the main menu :";
    cin>>menu_redirect;
    if(menu_redirect=='Y' || menu_redirect=='y')
    goto menu;
    break;
    case 3:
    bookByAuthor(lib);
    cout<<"\t\t\t\t\t\t\t Press 'Y' or 'y' to go back to the main menu :";
    cin>>menu_redirect;
    if(menu_redirect=='Y' || menu_redirect=='y')
    goto menu;
    break;
    case 4:
    bookByTitle(lib);
    cout<<count+1; 
    cout<<"\t\t\t\t\t\t\t Press 'Y' or 'y' to go back to the main menu :";
    cin>>menu_redirect;
    if(menu_redirect=='Y' || menu_redirect=='y')
    goto menu;
    break;
    case 5:
    totalBooks();
    cout<<count+1; 
    cout<<"\t\t\t\t\t\t\t Press 'Y' or 'y' to go back to the main menu :";
    cin>>menu_redirect;
    if(menu_redirect=='Y' || menu_redirect=='y')
    goto menu;
    break;
    case 6:
    issueBook(lib);
    cout<<"\t\t\t\t\t\t\t Press 'Y' or 'y' to go back to the main menu :";
    cin>>menu_redirect;
    if(menu_redirect=='Y' || menu_redirect=='y')
    goto menu;
    break;
    default:
    cout<<endl<<"<<\t\t\t\t\t\t\t You have entered an invalid number ";
    goto selection;
   }   
   
   
}








































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    




