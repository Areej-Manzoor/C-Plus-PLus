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
    Marks s[2];
    float percen;
   cout<<"----------------------"<<endl;
   cout<<"Enter Students Details "<<endl;
   cout<<"----------------------"<<endl;
    for(int i=0;i<2;i++)
    {
        
        cout<<"Enter "<<i+1<<" Student Name:";
        cin>>s[i].name;
        cout<<"Enter Marks of Each Student out of 100"<<endl;
        
        chem_marks:
        cout<<"Enter Chemistry Marks :";
        cin>>s[i].chem_marks;
        if(s[i].chem_marks>100 || s[i].chem_marks<0)
        {
            cout<<"Marks should be between 0 to 100,enter Chemistry marks again"<<endl;
            goto chem_marks;
        }    
            
        maths_marks:
        cout<<"Enter Maths Marks :";
        cin>>s[i].maths_marks;
         if(s[i].maths_marks>100 || s[i].maths_marks<0)
        {
            cout<<"Marks should be between 0 to 100,enter Maths marks again"<<endl;
            goto maths_marks;
        }  
        
        phy_marks:
        cout<<"Enter Physics Marks :";
        cin>>s[i].phy_marks;
        if(s[i].phy_marks>100 || s[i].phy_marks<0)
        {
            cout<<"Marks should be between 0 to 100,enter Physics again"<<endl;
            goto phy_marks;
        }  
        cout<<endl;
         
    }
    
    cout<<endl<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Details & Percentage of All Students "<<endl;
    cout<<"-------------------------------------"<<endl;
     for(int i=0;i<2;i++)
    {
         cout<<"Student Name : "<<s[i].name<<endl;
         cout<<"Chemistry Marks : : "<<s[i].chem_marks<<endl;
         cout<<"Maths Marks : : "<<s[i].maths_marks<<endl;
         cout<<"Physics Marks : : "<<s[i].phy_marks<<endl;
         percen=(s[i].chem_marks + s[i].maths_marks + s[i].phy_marks)/300.0*100;
         cout<<"Percentage :"<<fixed<<setprecision(2)<<percen<<endl<<endl;
          
     
        
    }
    
}








































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



