#include <iostream>

class MyRobot {
public:
    MyRobot(int wholeNumber, double decimalNumber) : intValue(wholeNumber), doubleValue(decimalNumber) {
        // This part is where you can do more things if needed, like giving the robot additional instructions.
    }

    void showValues() {
        std::cout << "Remembered values - Integer: " << intValue << ", Decimal: " << doubleValue << std::endl;
    }

private:
    int intValue;
    double doubleValue;
};

int main() {
    // Building the robot and telling it what values to remember
    MyRobot myRobot(42, 3.14);

    // The robot can now show you what it remembers
    myRobot.showValues();

    return 0;
}
