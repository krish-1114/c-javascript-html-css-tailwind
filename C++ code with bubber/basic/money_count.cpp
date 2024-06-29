#include<iostream>

using namespace std;

int main() {
    int amount;

    cout << "Enter the amount in rupees: ";
    cin >> amount;

    int a,b,c,d;

    
while (amount > 0) {
switch (amount >= 100 ? 100 : amount >= 50 ? 50 : amount >= 20 ? 20 : 10) {
case 100:
    a;
    amount -= 100;
    break;
case 50:
    b;
    amount -= 50;
    break;
case 20:
    c;
    amount -= 20;
    break;
case 10:
    d;
    amount -= 10;
    break;
        }
    }

    cout << "Number of 100 rupee notes: " << a << endl;
    cout << "Number of 50 rupee notes: " << b << endl;
    cout << "Number of 20 rupee notes: " << c << endl;
    cout << "Number of 10 rupee notes: " << d << endl;

    return 0;
}
