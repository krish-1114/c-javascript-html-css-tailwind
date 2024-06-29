#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void makeSound() {
        cout << "Generic animal sound" << endl;
    }
};

// First derived class
class Dog : public Animal {
public:
    void makeSound() {
        cout << "Woof woof!" << endl;
    }
};

// Second derived class
class Cat : public Animal {
public: 
    void makeSound() {
        cout << "Meow meow!" << endl;
    }
};

// Ambiguous class inheriting from both Dog and Cat
class ConfusedAnimal : public Dog, public Cat {};

int main() {
    ConfusedAnimal confused;

    // Uncommenting the line below would result in ambiguity
    // confused.makeSound();

    // To resolve ambiguity, specify which version to use
    confused.Dog::makeSound();  // Using Dog's sound
    confused.Cat::makeSound();  // Using Cat's sound

    return 0;
}
