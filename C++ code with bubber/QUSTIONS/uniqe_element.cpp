#include <iostream>
using namespace std;

int uniq(int arr[], int size, int ans) {
    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {
    int arr[5] = {1, 2, 1, 4, 4};
    int size = 5;
    int ans = 0;

    cout << uniq(arr, 5, 0) << endl;

    return 0;
}
