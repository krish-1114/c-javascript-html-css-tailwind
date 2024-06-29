#include <iostream>

// Define a simple class
class SimpleClass {
public:
    // Member variable
    int data;

    // Member function
    void displayData() {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    // Create an object 'obj' of class 'SimpleClass'
    SimpleClass obj;

    // Initialize the 'data' member of 'obj'
    obj.data = 42;

    // Create a pointer to an object of type 'SimpleClass'
    SimpleClass *pObj;

    // Make the pointer 'pObj' point to the address of object 'obj'
    pObj = &obj;

    // Access the 'data' member through the pointer and update its value
    pObj->data = 99;

    // Call the displayData method using the pointer
    pObj->displayData();

    return 0;
}
