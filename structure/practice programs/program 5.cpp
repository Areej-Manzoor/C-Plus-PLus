#include <iostream>
#include <iomanip>

using namespace std;

// PROBLEM :Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.

struct Marks
{
    int chem_marks,maths_marks,phy_marks;
    char name[50];
    
    
};


int main()
{
    Marks s[5];
    float percen;
    for(int i=0;i<5;i++)
    {
        
        cout<<"Enter "<<i+1<<" Student Name:";
        cin>>s[i].name;
        cout<<"Enter Marks of Each Student out of 100"<<endl;
        cout<<"Enter Chemistry Marks :";
        cin>>s[i].chem_marks;
         cout<<"Enter Maths Marks :";
        cin>>s[i].maths_marks;
         cout<<"Enter Physics Marks :";
        cin>>s[i].phy_marks;
         
    }
    
    cout<<endl<<endl;
    cout<<"Details & Percentage of All Students "<<endl;
     for(int i=0;i<5;i++)
    {
         cout<<"Student Name : "<<s[i].name<<endl;
         cout<<"Chemistry Marks : : "<<s[i].chem_marks<<endl;
         cout<<"Maths Marks : : "<<s[i].maths_marks<<endl;
         cout<<"Physics Marks : : "<<s[i].phy_marks<<endl;
         percen=(s[i].chem_marks + s[i].maths_marks + s[i].phy_marks)/300.0*100;
         cout<<"Percentage :"<<fixed<<setprecision(2)<<percen<<endl<<endl;
          
     
        
    }
    
}








































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



