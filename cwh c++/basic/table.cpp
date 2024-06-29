#include <iostream>
using namespace std;

int main() {
    int number = 6; 
    int product = 0;

    for (int i = 1; i <= 10; ++i) {
        product = number * i;
        std::cout << product << std::endl;
    }

    return 0;
}
