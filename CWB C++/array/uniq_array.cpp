#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 1, 3, 3, 5};

    for (int i = 0; i < 5; i++) {
        int count = 0;
        for (int j = 0; j < 5; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            cout << arr[i] << " is " << count << " time " << endl;
        }
    }

    return 0;
}
