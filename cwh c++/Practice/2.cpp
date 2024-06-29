#include <iostream>

// Base class representing a shape
class Shape {
public:
    // Virtual function for drawing a shape
    virtual void draw() {
        std::cout << "Drawing a generic shape" << std::endl;
    }
};

// Derived class for a specific shape - Circle
class Circle : public Shape {
public:
    // Override the draw function for Circle
    void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

// Derived class for another specific shape - Square
class Square : public Shape {
public:
    // Override the draw function for Square
    void draw() override {
        std::cout << "Drawing a square" << std::endl;
    }
};

int main() {
    // Creating objects of different shapes
    Shape genericShape;
    Circle circleShape;
    Square squareShape;

    // Using polymorphism - treating all shapes as the base class
    Shape* shapes[] = {&genericShape, &circleShape, &squareShape};

    // Loop through shapes and call their draw method
    for (int i = 0; i < 3; ++i) {
        shapes[i]->draw();  // This line demonstrates polymorphism
    }

    return 0;
}
