#include <iostream>

int main() {
    int arr[100]; // Assuming an array of size 100

    // Assume you have populated only the first three elements
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    // Find the number of populated elements
    int sizeOfArray = 0;
    while (sizeOfArray < 100 && arr[sizeOfArray] != 0) {
        sizeOfArray++;
    }

    std::cout << "Number of populated elements: " << sizeOfArray << std::endl;

    return 0;
}
