#include <iostream>
using namespace std;

// Grandparent class
class Grandparent {
public:
    void grandparentBehavior() {
        cout << "Grandparent's behavior" << endl;
    }
};

// Parent classes inheriting from Grandparent
class Parent1 : public Grandparent {
public:
    void parent1Behavior() {
        cout << "Parent 1's behavior" << endl;
    }
};

class Parent2 : public Grandparent {
public:
    void parent2Behavior() {
        cout << "Parent 2's behavior" << endl;
    }
};

// Child class inheriting from both Parent1 and Parent2
class Child : public Parent1, public Parent2 {
public:
    // Resolve ambiguity by explicitly specifying which version to use
    void grandparentBehavior() {
        Parent1::grandparentBehavior();
    }

    void childBehavior() {
        cout << "Child's behavior" << endl;
    }
};

int main() {
    // Create an object of the Child class
    Child myChild;

    // Access behaviors from all levels
    myChild.grandparentBehavior();  // Now it's not ambiguous
    myChild.parent1Behavior();       // Parent 1's behavior
    myChild.parent2Behavior();       // Parent 2's behavior
    myChild.childBehavior();         // Child's behavior

    return 0;
}

