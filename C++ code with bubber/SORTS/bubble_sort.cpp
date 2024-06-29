#include<iostream>
using namespace std;

int bubble(int arr,int size){
    
}


int main(){

    int arr[5] = {4,6,8,2,1};
    int n = 5;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

    

return 0;
}