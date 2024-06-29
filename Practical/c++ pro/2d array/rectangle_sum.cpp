#include<iostream>
using namespace std;
int main(){

int arr[4][2]={{1,33},{2,34},{3,35},{4,36}};
int sum = 0;
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 2; j++)
        {
            sum += arr[i][j];
        }   
       cout<<endl;
    }

    cout<<" SUM IS :- "<<sum<<endl;
 
return 0;
}

