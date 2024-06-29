#include <iostream>

class Car {
public:
    // Constructor
    Car(int initialSpeed) : speed(initialSpeed) {
        std::cout << "Car created with speed: " << speed << " km/h\n"; //1
    }

    // Member function to display speed
    void displaySpeed() {
        std::cout << "Current speed: " << speed << " km/h\n"; // 50
    }

    // Destructor
    ~Car() {
        std::cout << "Car destroyed. Cleanup complete.\n"; //3
    }

private:
    int speed;
};

int main() {
    // Creating a car object
    Car myCar(50);

    // Displaying the initial speed
    // myCar.displaySpeed();

    // Doing some operations with the car (not necessary for the destructor example)
    // ...

    // Program will automatically call the destructor when the object is no longer needed
    // This is when the program exits the 'main' function, and 'myCar' goes out of scope

    return 0;
}
