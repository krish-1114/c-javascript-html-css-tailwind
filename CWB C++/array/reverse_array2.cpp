#include<iostream>
using namespace std;

int print(int arr[],int size)
{

    cout << "\nReverse Array \n";

    for (int i = size-1; i >= 0; i--) { 
        cout << arr[i] << " ";
    }

}

int main() {
    int size;

    cout<<"Enter size ";
    cin>>size;
    
    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    print(arr,size);

    return 0;
}

