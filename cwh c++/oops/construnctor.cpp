#include <iostream>
using namespace std;

// Class definition for complex numbers
class complex {
    int a, b;

public:
    // Constructor declaration
    complex(void);

    // Function to print the complex number
    void printnumber() {
        cout << "Your number is " << a << " + " << b << endl;
    }
};

// Definition of the constructor
complex::complex(void) {
    a = 10;
    b = 0;
}

// Main function where the program starts
int main() {
    // Creating an object of the complex class
    complex c;

    // Calling the printnumber function multiple times
    c.printnumber();
    c.printnumber();
    c.printnumber();
    c.printnumber();
    c.printnumber();

    return 0;
}
