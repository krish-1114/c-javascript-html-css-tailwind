#include<iostream>
using namespace std;

int main(){

int arr[6] = {1,2,3,4,5,6};
int size = 6;
int n = 6;

for (int i = 0; i < size; i=i+2)
{
    if(i<size){
        swap(arr[i],arr[i+1]);
    }    
}

for (int i = 0; i < n; i++)
{
    cout<<arr[i];
}

return 0;
}