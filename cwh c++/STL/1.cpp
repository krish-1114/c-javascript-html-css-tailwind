#include <iostream>
#include <vector>

int main() {
    // Step 1: Creating an empty vector
    std::vector<int> myVector;

    // Step 2: Adding elements to the vector
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // Step 3: Accessing elements in the vector
    std::cout << "Element at index 0: " << myVector[0] << std::endl;
    std::cout << "Element at index 1: " << myVector[1] << std::endl;
    std::cout << "Element at index 2: " << myVector[2] << std::endl;

    // Step 4: Modifying elements in the vector
    myVector[1] = 25; // Change the value at index 1 to 25

    // Step 5: Displaying the modified vector
    std::cout << "Modified vector:" << std::endl;
    for (int i = 0; i < myVector.size(); ++i) {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;

    // Step 6: Removing an element from the vector
    myVector.pop_back(); // Remove the last element

    // Step 7: Displaying the vector after removal
    std::cout << "Vector after removal:" << std::endl;
    for (int i = 0; i < myVector.size(); ++i) {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
