#include <iostream>
#include <string>

// Parent class
class Animal {
public:
    Animal(const std::string& name) : name(name) {}

    void speak() const {
        std::cout << name << " makes a sound" << std::endl;
    }

protected:
    std::string name;
};

// Child class inheriting from Animal
class Dog : public Animal {
public:
    Dog(const std::string& name) : Animal(name) {}

    void speak() const {
        std::cout << name << " barks" << std::endl;
    }
};

int main() {
    // Creating an instance of the Dog class
    Dog myDog("Buddy");

    // Accessing methods from both classes
    myDog.speak();  // Output: Buddy barks

    return 0;
}
