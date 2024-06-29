#include<iostream>
using namespace std;
int main(){
    int arr[4][2]={{1,33},{2,34},{3,35},{4,36}};
    
    cout<<"FIRST MATRIX :- "<<endl;

     for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<arr[i][j]<<" ";
        }   
       cout<<endl;
    }
    
    int arr2[4][2]={{13,33},{22,34},{43,35},{46,36}};
    
    cout<<"SECOND MATRIX :- "<<endl;
    
     for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<arr2[i][j]<<"  ";
        }   
       cout<<endl;
    }
    
    int sum[4][2];


    cout<<"Sum of Matrix is THIS :- "<<endl;

     for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = arr[i][j] + arr2[i][j];
            cout<<sum[i][j]<<" ";
        }   
       cout<<endl;
    }
    


return 0;
}