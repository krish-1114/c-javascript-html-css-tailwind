#include<iostream>
using namespace std;
int main(){

int n;

cout<<"Enter the value of number you want to enter";
cin>>n;

int arr[n];

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

for (int i = 0; i < n; i+=2)
{

if (i+1 > n)
{
    int temp = arr[i];
    arr[i]  = arr[i + 1];
    arr[i + 1] = temp;
}

}

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


return 0;
}