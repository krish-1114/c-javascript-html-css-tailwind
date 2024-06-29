#include <iostream>

class Toy {
public:
    void play() {
        std::cout << "Playing with a generic toy!" << std::endl;
    }
};

class Car : public Toy {
public:
    // Function overloading
    void play() {
        std::cout << "Vroom vroom! Playing with a car!" << std::endl;
    }
};

class Doll : public Toy {
public:
    // Function overloading
    void play() {
        std::cout << "La la la! Playing with a doll!" << std::endl;
    }
};

int main() {
    Toy genericToy;
    Car myCar;
    Doll myDoll;

    // Using the same function name, but each type of toy plays differently
    genericToy.play();
    myCar.play();
    myDoll.play();

    return 0;
}
