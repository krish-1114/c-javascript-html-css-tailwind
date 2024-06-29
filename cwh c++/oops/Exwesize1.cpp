#include <iostream>
#include <cmath>

using namespace std;

class SimpleCalculator {
public:
    void perform_operations(double num1, double num2) {
        cout << "Simple Calculator Operations:" << endl;
        cout << "Addition: " << num1 + num2 << endl;
        cout << "Subtraction: " << num1 - num2 << endl;
        cout << "Multiplication: " << num1 * num2 << endl;
        cout << "Division: " << num1 / num2 << endl;
    }
};

class ScientificCalculator {
public:
    void perform_operations(double num1, double num2) {
        cout << "Scientific Calculator Operations:" << endl;
        cout << "Power: " << pow(num1, num2) << endl;
        cout << "Square root of first number: " << sqrt(num1) << endl;
        cout << "Square root of second number: " << sqrt(num2) << endl;
        cout << "Logarithm base 10 of first number: " << log10(num1) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator {
    // This class inherits both SimpleCalculator and ScientificCalculator
};

int main() {
    // Using predefined values instead of user input
    double inputSimpleFirst = 10.0;
    double inputSimpleSecond = 5.0;

    double inputScientificFirst = 9.0;
    double inputScientificSecond = 4.0;

    HybridCalculator hybridCalc;

    // Simple Calculator Operations
    hybridCalc.SimpleCalculator::perform_operations(inputSimpleFirst, inputSimpleSecond);

    // Scientific Calculator Operations
    hybridCalc.ScientificCalculator::perform_operations(inputScientificFirst, inputScientificSecond);

    return 0;
}
