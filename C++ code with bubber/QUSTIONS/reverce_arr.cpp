#include<iostream>
using namespace std;
int reverse(int arr[],int n){
    int start = 0;
    int end = n-1;
    while (start <= end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int printarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int brr[5] = {1,2,3,4,5};
    reverse(arr,6);
    reverse(brr,5);
    printarr(arr,6);
    cout<<endl;
    printarr(brr,5);
return 0;
}