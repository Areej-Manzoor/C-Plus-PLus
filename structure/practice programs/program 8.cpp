#include <iostream>

using namespace std;

// PROBLEM :Write a program to compare two dates entered by user. Make a structure named Date to store the elements day, month and year to store the dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".

struct date
{
    int day,month,year;
    
};


int main()
{
    date d[2];
    
    for(int i=0;i<2;i++)
    {
        cout<<"----------------"<<endl;
        cout<<"Enter Date "<<i+1<<endl;
        cout<<"----------------"<<endl;
        cout<<"Enter Day :";
        cin>>d[i].day;
        cout<<"Enter Month :";
        cin>>d[i].month;
        cout<<"Enter Year :";
        cin>>d[i].year;
        
        
    }
    
    cout<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"Check whether both dates are equal or not? "<<endl;
    cout<<"-------------------------------------------"<<endl;
    if((d[0].day==d[1].day ) && (d[0].month==d[1].month) & (d[0].year==d[1].year ))
    cout<<"Dates are equal";
    else
    cout<<"Dates are not equal";
      
    
}








































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



