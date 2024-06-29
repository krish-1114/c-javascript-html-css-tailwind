
#include<iostream>
using namespace std;

int main() {
    int x[5],y;
    cout << "Enter 5 integers: ";

    for (int i = 0; i < 5; i++) {
        cin >> x[i];
    }

    cout<<"Enter x";
    cin>>y;
    int max = x[0]; // Initialize max with the first element of the array

    for (int i = 1; i < 5; i++) {
        if (x[i] > max) {
            max = x[i];
            cout<<max;
        }
    }
    return 0;
}

//10 : 17
