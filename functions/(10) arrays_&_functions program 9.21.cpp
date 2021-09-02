#include <iostream>
using namespace std;

// ARRAYS AND FUNCTIONS

// Functions Example :Program 9.21 from it series c++ book | page:292
int max(int arr[3][2]) //here int max(int arr[][]) is error coz second dimention is required, int max(int arr[][2]) is ok ,int max(int arr[3][2]) is also ok
{
    int max=arr[0][0];
    for(int i=0;i<3;i++)
{
    for(int j=0;j<2;j++)
    {
       if(arr[i][j]>max)
       max=arr[i][j];
    }
    
}
return max;
}
int main()
{
int num[3][2];

for(int i=0;i<3;i++)
{
    for(int j=0;j<2;j++)
    {
        cout<<"Enter value of num ["<<i<<"]["<<j<<"] : ";
        cin>>num[i][j];
    }
    
}

int m=max(num);

cout<<"Maximum value : "<<m;
}












































                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    



