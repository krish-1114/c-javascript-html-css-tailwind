#include <iostream>

// Virtual Base Class
class SharedResource {
public:
    SharedResource() {
        std::cout << "SharedResource constructor called." << std::endl;
    }

    void sharedMethod() {
        std::cout << "This is a method from the SharedResource class." << std::endl;
    }

    // Virtual function (optional)
    virtual void virtualMethod() {
        std::cout << "This is a virtual method in the SharedResource class." << std::endl;
    }
};

// Derived Class 1
class Derived1 : public virtual SharedResource {
public:
    Derived1() {
        std::cout << "Derived1 constructor called." << std::endl;
    }
};

// Derived Class 2
class Derived2 : public virtual SharedResource {
public:
    Derived2() {
        std::cout << "Derived2 constructor called." << std::endl;
    }
};

// Final Class combining Derived1 and Derived2
class FinalClass : public Derived1, public Derived2 {
public:
    FinalClass() {
        std::cout << "FinalClass constructor called." << std::endl;
    }
};

int main() {
    FinalClass finalObject;
    finalObject.sharedMethod();
    finalObject.virtualMethod();  // Calls the virtual method from the SharedResource class

    return 0;
}
