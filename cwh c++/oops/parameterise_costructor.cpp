#include <iostream>
using namespace std;

class complex {
    int a, b;

public:
    // Parameterized constructor declaration
    complex(int x, int y);

    // Member function to print the complex number
    void printnumber() {
        cout << "Your number is " << a << " + " << b << endl;
    }
};

// Parameterized constructor definition
complex::complex(int x, int y) {
    a = x;
    b = y;
}

int main() {
    // Implicit call to the parameterized constructor
    complex a(4, 6);
    a.printnumber();

    // Explicit call to the parameterized constructor
    complex b = complex(5, 4);
    b.printnumber();

    return 0;
}
