#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // Default constructor
    Point() {
        x = 0;
        y = 0;
    }

    // Parameterized constructor with two parameters
    Point(int A, int B) {
        x = A;
        y = B;
    }

    // Parameterized constructor with one parameter (overloaded)
    Point(int A) {
        x = A;
        y = 0; // Default value for y
    }

    // Display function to print coordinates
    void display() {
        cout << "Point: (" << x << ", " << y << ")\n";
    }
};

int main() {
    // Creating objects using different constructors
    Point p1;           // Default constructor
    Point p2(3, 4);      // Parameterized constructor with two parameters
    Point p3(5);         // Parameterized constructor with one parameter

    // Displaying points
    p1.display();   //0,0
    p2.display();   //3,4
    p3.display();   //5,0

    return 0;
}
