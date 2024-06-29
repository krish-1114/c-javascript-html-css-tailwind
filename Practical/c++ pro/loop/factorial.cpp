#include <iostream>
using namespace std;

int main() {
    int number, sum = 1;

    cout << "Enter a number: ";
    cin >> number;

    for (int i = 0; i <= number; i++) {
        sum *= i;
    }

 cout<<sum;
    return 0;
}
