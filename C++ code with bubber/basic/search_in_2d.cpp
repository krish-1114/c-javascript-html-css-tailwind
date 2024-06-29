#include<iostream>
using namespace std;

bool ispresent(int arr[][4],int target,int row,int col){
    for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        if (arr[row][col] == target)
        {
            return 1;
        }   
    }
}
return 0;
}

int main(){

int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 4; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

cout<<"Enter element to search :- "<<endl;
int target;
cin>>target;

if (ispresent(arr,target,3,4))
{
    cout<<"Is predent"<<endl;
}else 
    cout<<"Not predent"<<endl;

return 0;
}