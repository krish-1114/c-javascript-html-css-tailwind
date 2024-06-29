// 1 Base class
class Vehicle {
public:
    // Properties and methods of the Vehicle class
};

// Derived class inheriting from Vehicle
class Car : public Vehicle {
public:
    // Additional properties and methods specific to Car
};

//  2 -----------------------------------

// Base classes
class Vehicle {
public:
    // Properties and methods of the Vehicle class
};

class Engine {
public:
    // Properties and methods of the Engine class
};

// Derived class inheriting from both Vehicle and Engine
class Car : public Vehicle, public Engine {
public:
    // Additional properties and methods specific to Car
};

// 3 -----------------------------------

// Base class
class Vehicle {
public:
    // Properties and methods of the Vehicle class
};

// Derived class inheriting from Vehicle
class Car : public Vehicle {
public:
    // Additional properties and methods specific to Car
};

// Further derived class inheriting from Car
class SportsCar : public Car {
public:
    // Additional properties and methods specific to SportsCar
};


// 4 -----------------------------------

// Base class
class Vehicle {
public:
    // Properties and methods of the Vehicle class
};

// Derived classes inheriting from Vehicle
class Car : public Vehicle {
public:
    // Additional properties and methods specific to Car
};

class Truck : public Vehicle {
public:
    // Additional properties and methods specific to Truck
};

// 5 -----------------------------------
// Base classes
class Vehicle {
public:
    // Properties and methods of the Vehicle class
};

class Engine {
public:
    // Properties and methods of the Engine class
};

// Derived class inheriting from both Vehicle and Engine
class Car : public Vehicle, public Engine {
public:
    // Additional properties and methods specific to Car
};

// Further derived classes inheriting from Car and Vehicle
class Bike : public Car, public Vehicle {
public:
    // Additional properties and methods specific to Bike
};
