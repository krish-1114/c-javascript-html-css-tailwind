#include <iostream>
using namespace std;

int main() {
    int myArray[5] = {1, 2};

    int sizeOfArray = sizeof(myArray) / sizeof(myArray[0]);

    cout << "Size of the array: " << sizeOfArray << std::endl;

    return 0;
}
