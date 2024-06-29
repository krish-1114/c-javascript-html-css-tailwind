#include<iostream>
using namespace std;
int main(){

int arr[4][2]={{1,33},{2,34},{3,35},{4,36}};
int sum = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum *= arr[i][j];
        }   
       cout<<endl;
    }

    cout<<" MULTI IS :- "<<sum<<endl;
 
return 0;
}