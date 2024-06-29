#include<iostream>
using namespace std;
int main(){
    cout<<"Roll Mark"<<endl;
  int arr[4][2]={{1,33},{2,34},{3,35},{4,36}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<arr[i][j]<<"     ";
        }   
       cout<<endl;
    }
return 0;
}