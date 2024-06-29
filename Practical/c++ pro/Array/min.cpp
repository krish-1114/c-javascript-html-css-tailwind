#include<iostream>
using namespace std;

int main() {
    int x[5];
    cout << "Enter 5 integers: ";

    for (int i = 0; i < 5; i++) {
        cin >> x[i];
    }

    int max = x[0]; // Initialize max with the first element of the array

    for (int i = 1; i < 5; i++) {
        if (x[i] < max) {
            max = x[i];
        }
    }

    cout << "Minimum value is: " << max << endl;

    return 0;
}
