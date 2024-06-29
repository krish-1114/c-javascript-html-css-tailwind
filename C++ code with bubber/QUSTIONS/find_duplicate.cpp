#include <iostream>
using namespace std;

int uniq(int arr[], int size, int ans) {

    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    
    for (int i = 1; i < size; i++)
    {
        ans =ans^i;
    }
    
    return ans;
}

int main() {
    int arr[6] = {1,2,3,3,4,4};
    int size = 5;
    int ans = 0;

    cout << uniq(arr, 6, 0) << endl;

    
    return 0;
}
