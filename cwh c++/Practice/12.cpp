#include <iostream>

class A {
public:
    virtual void action() {
        std::cout << "A's action\n";
    }
};

class B : public A {
public:
    void action() override {
        std::cout << "B's action\n";
    }
};

class C : public A {
public:
    void action() override {
        std::cout << "C's action\n";
    }
};

int main() {
    A a;
    B b;
    C c;

    A* ptrA = &a;
    A* ptrB = &b;
    A* ptrC = &c;

    ptrA->action();
    ptrB->action();
    ptrC->action();

    return 0;
}
