#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number to check if it's composite: ";
    cin >> number;

    if (number == 1)
    {
        cout<<"Nothing ";
        return 0;
    }
        

    for (int i = 2; i < number; ++i) {
        if (number % i == 0) {
            cout << number << " is a composite number." << endl;
            return 0;
        }
    }

    cout << number << " is not a composite number." << endl;
    
    return 0;
}