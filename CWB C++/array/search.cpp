#include<iostream>
using namespace std;
int main(){

int arr[5] = {1,2,3,4,5};
int search = 5;

for (int i = 0; i < 5; i++)
{
    if (arr[i] == search)
    {
        cout<<search<<" is present at position "<<arr[i];
    }
    
}



return 0;
}