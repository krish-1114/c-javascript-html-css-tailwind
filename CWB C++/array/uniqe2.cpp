#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 1, 3, 2, 2};
    bool isUnique[5] = {true, true, true, true, true}; // Flag to mark unique elements

    // Iterate through the array
    for (int i = 0; i < 5; i++) {
        // Check if the current element is unique by comparing with subsequent elements
        for (int j = i + 1; j < 5; j++) {
            if (arr[j] == arr[i]) {
                isUnique[j] = false; // Mark non-unique elements
                if (arr[i] == 1) {
                    isUnique[i] = false; // Also mark 1 as non-unique
                }
            }
        }
    }

    // Print only the unique elements
    cout << "Unique elements: ";
    for (int i = 0; i < 5; i++) {
        if (isUnique[i] && arr[i] != 1) { // Check if element is unique and not equal to 1
            cout << arr[i] << " ";
        }
    }

    cout << endl;

    return 0;
}
