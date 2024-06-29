#include <iostream>

int main() {
    // Declare an array of numbers
    int numbers[5];  // This means we have 5 boxes for numbers

    // Put some numbers in the boxes
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // Retrieve and print the number in box number 2
    std::cout << "Number in box 2: " << numbers[10] << std::endl;

    return 0;
}
