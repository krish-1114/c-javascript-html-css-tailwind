#include <iostream>

// Class definition for a simple Car
class Car {
public:
    // Constructor: Initializes default values
    Car() {
        color = "Red";
        wheels = 4;
        moving = false;
    }

    // Function to start the car
    void start() {
        moving = true;
        std::cout << "Car is now moving!\n";
    }

    // Function to stop the car
    void stop() {
        moving = false;
        std::cout << "Car has stopped.\n";
    }

    // Function to display information about the car
    void display() {
        std::cout << "Color: " << color << "\n";
        std::cout << "Wheels: " << wheels << "\n";
        std::cout << "Moving? " << (moving ? "Yes" : "No") << "\n";
    }

private:
    // Properties of the Car
    std::string color;
    int wheels;
    bool moving;
};

// Main function where the program starts
int main() {
    // Create a Car object named myCar
    Car myCar;

    // Display initial state of the car
    std::cout << "Initial State:\n";
    myCar.display();

    // Start the car and display the updated state
    myCar.start();
    std::cout << "\nState after starting:\n";
    myCar.display();

    // Stop the car and display the final state
    myCar.stop();
    std::cout << "\nFinal State:\n";
    myCar.display();

    // Return 0 to indicate successful execution
    return 0;
}
