#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){

    int arr[] = {1,3,4,5,6,77,2};
    sort(arr,arr+5); // +5 meas it only sort first five element
    sort(arr,arr+7, greater<int>()); 
    
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
    }
    
    

return 0;
}