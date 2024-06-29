#include <iostream>
using namespace std;

int main() {
    // Dynamic memory allocation using 'new'
    char *p = new char;

    // Assigning a value to the dynamically allocated memory
    *p = 'A';

    // Displaying the value
    std::cout << "Value stored in dynamic memory: " << *p << std::endl;

    // Dynamic memory deallocation using 'delete'
    delete p;

    cout<<p;
    

    return 0;
}
